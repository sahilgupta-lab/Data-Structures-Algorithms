#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class SET {
private:
    vector<int> elements;

public:
    // add an element
    void addElement(int element) {
        if (!ismember(element))
            elements.push_back(element);
    }

    // check if an element is a member of the set
    bool ismember(int element) const {
        for (int i = 0; i < elements.size(); i++) {
            if (elements[i] == element)
                return true;
        }
        return false;
    }

    // get the elements of the set
    const vector<int>& getElements() const {
        return elements;
    }

    // compute the power set of the set
    vector<vector<int>> powerset() const {
        vector<vector<int>> result;
        int n = elements.size();
        int subsets = 1 << n;

        for (int i = 0; i < subsets; i++) {
            vector<int> subset;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j))
                    subset.push_back(elements[j]);
            }
            result.push_back(subset);
        }

        return result;
    }

    // subset check
    bool subset(const SET& other) const {
        for (int element : other.elements) {
            if (!ismember(element))
                return false;
        }
        return true;
    }

    // union
    SET setUnion(const SET& other) const {
        SET result = *this;
        for (int element : other.elements) {
            if (!result.ismember(element))
                result.addElement(element);
        }
        return result;
    }

    // intersection
    SET intersection(const SET& other) const {
        SET result;
        for (int element : elements) {
            if (other.ismember(element))
                result.addElement(element);
        }
        return result;
    }

    // complement
    SET complement(const SET& universalSet) const {
        SET result;
        for (int element : universalSet.elements) {
            if (!ismember(element))
                result.addElement(element);
        }
        return result;
    }

    // set difference
    SET difference(const SET& other) const {
        SET result;
        for (int element : elements) {
            if (!other.ismember(element))
                result.addElement(element);
        }
        return result;
    }

    // symmetric difference 
    SET symmetricDifference(const SET& other) const {
        SET result;
        for (int element : elements) {
            if (!other.ismember(element))
                result.addElement(element);
        }
        for (int element : other.elements) {
            if (!ismember(element))
                result.addElement(element);
        }
        return result;
    }

    // cartesian product
    vector<pair<int, int>> cartesianProduct(const SET& other) const {
        vector<pair<int, int>> result;
        for (int element1 : elements) {
            for (int element2 : other.elements) {
                result.push_back(make_pair(element1, element2));
            }
        }
        return result;
    }
};

int main() {
    SET set1, set2, universalSet;
    int size1, size2, universalSize, element;

    cout << "Enter the size of Universal Set: ";
    cin >> universalSize;
    cout << "Enter the elements of Universal Set: ";
    for (int i = 0; i < universalSize; i++) {
        cin >> element;
        universalSet.addElement(element);
    }

    cout << "Enter the size of Set 1: ";
    cin >> size1;
    cout << "Enter the elements of Set 1: ";
    for (int i = 0; i < size1; i++) {
        cin >> element;
        set1.addElement(element);
    }

    cout << "Enter the size of Set 2: ";
    cin >> size2;
    cout << "Enter the elements of Set 2: ";
    for (int i = 0; i < size2; i++) {
        cin >> element;
        set2.addElement(element);
    }

    cout << "Enter an element to check membership: ";
    cin >> element;
    cout << "\nElement is a member of Set 1? " << set1.ismember(element) << endl;

    cout << "\nPower Set of Set 1: " << endl;
    vector<vector<int>> powerset1 = set1.powerset();
    for (const auto& subset : powerset1) {
        for (int element : subset)
            cout << element << " ";
        cout << endl;
    }

    cout << "\nSet 1 is a subset of Set 2? " << set1.subset(set2) << endl;

    SET unionSet = set1.setUnion(set2);
    cout << "\nUnion of Set 1 and Set 2: ";
    for (int element : unionSet.getElements())
        cout << element << " ";
    cout << endl;

    SET intersectionSet = set1.intersection(set2);
    cout << "\nIntersection of Set 1 and Set 2: ";
    for (int element : intersectionSet.getElements())
        cout << element << " ";
    cout << endl;

    SET complementSet = set1.complement(universalSet);
    cout << "\nComplement of Set 1 with respect to the Universal Set: ";
    for (int element : complementSet.getElements())
        cout << element << " ";
    cout << endl;

    SET differenceSet = set1.difference(set2);
    cout << "\nDifference between Set 1 and Set 2: ";
    for (int element : differenceSet.getElements())
        cout << element << " ";
    cout << endl;

    SET symmetricDifferenceSet = set1.symmetricDifference(set2);
    cout << "\nSymmetric Difference between Set 1 and Set 2: ";
    for (int element : symmetricDifferenceSet.getElements())
        cout << element << " ";
    cout << endl;

    vector<pair<int, int>> cartesianProduct = set1.cartesianProduct(set2);
    cout << "\nCartesian Product of Set 1 and Set 2: ";
    for (const auto& pair : cartesianProduct)
        cout << "(" << pair.first << ", " << pair.second << ") ";
    cout << endl;

    return 0;
}
