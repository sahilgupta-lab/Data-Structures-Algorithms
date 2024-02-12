#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class SET {
public:
    vector<int> elements;
    
    SET(vector<int> _elements) {
        elements = _elements;
    }
    
    bool ismember(int element) {
        return find(elements.begin(), elements.end(), element) != elements.end();
    }
    
    vector<vector<int>> powerset() {
        int n = elements.size();
        int num_subsets = pow(2, n);
        vector<vector<int>> result;
        for (int i = 0; i < num_subsets; i++) {
            vector<int> subset;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    subset.push_back(elements[j]);
                }
            }
            result.push_back(subset);
        }
        return result;
    }
    
    bool subset(SET other_set) {
        for (int element : elements) {
            if (!other_set.ismember(element)) {
                return false;
            }
        }
        return true;
    }
    
    SET union_set(SET other_set) {
        vector<int> result_elements = elements;
        for (int element : other_set.elements) {
            if (!ismember(element)) {
                result_elements.push_back(element);
            }
        }
        return SET(result_elements);
    }
    
    SET intersection_set(SET other_set) {
        vector<int> result_elements;
        for (int element : elements) {
            if (other_set.ismember(element)) {
                result_elements.push_back(element);
            }
        }
        return SET(result_elements);
    }
    
    SET complement(SET universal_set) {
        vector<int> result_elements;
        for (int element : universal_set.elements) {
            if (!ismember(element)) {
                result_elements.push_back(element);
            }
        }
        return SET(result_elements);
    }
    
    SET difference(SET other_set) {
        vector<int> result_elements;
        for (int element : elements) {
            if (!other_set.ismember(element)) {
                result_elements.push_back(element);
            }
        }
        return SET(result_elements);
    }
    
    SET symmetric_difference(SET other_set) {
        vector<int> result_elements;
        for (int element : elements) {
            if (!other_set.ismember(element)) {
                result_elements.push_back(element);
            }
        }
        for (int element : other_set.elements) {
            if (!ismember(element)) {
                result_elements.push_back(element);
            }
        }
        return SET(result_elements);
    }
    
    SET cartesian_product(SET other_set) {
        vector<int> result_elements;
        for (int element1 : elements) {
            for (int element2 : other_set.elements) {
                result_elements.push_back(element1 * element2);
            }
        }
        return SET(result_elements);
    }
};

int main() {
    // get the elements of the set from the user
    cout << "Enter the elements of the set (comma-separated): ";
    string input;
    getline(cin, input);
    vector<int> elements;
    size_t pos = 0;
    string token;
    while ((pos = input.find(",")) != string::npos) {
        token = input.substr(0, pos);
        elements.push_back(stoi(token));
        input.erase(0, pos + 1);
    }
    elements.push_back(stoi(input));
    
    // create a SET instance
    SET set1(elements);
    
    // create a Universal Set
