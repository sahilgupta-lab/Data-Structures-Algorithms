#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    set<int> set1, universal_set;
    int n, x;

    cout << "Enter size of set1: ";
    cin >> n;
    cout << "Enter elements of set1: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        set1.insert(x);
    }


    cout << "Enter size of universal set: ";
    cin >> n;
    cout << "Enter elements of universal set: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        universal_set.insert(x);
    }

    
    set<int> complement;
    set_difference(universal_set.begin(), universal_set.end(), set1.begin(), set1.end(),
                   inserter(complement, complement.begin()));


    cout << "Complement of set1: ";
    for (auto it = complement.begin(); it != complement.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
