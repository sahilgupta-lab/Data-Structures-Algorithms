#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> set1, set2;

    int n1, n2, x;

    
    cout << "Enter size of set1: ";
    cin >> n1;
    cout << "Enter elements of set1: ";
    for (int i = 0; i < n1; i++) {
        cin >> x;
        set1.insert(x);
    }

    
    cout << "Enter size of set2: ";
    cin >> n2;
    cout << "Enter elements of set2: ";
    for (int i = 0; i < n2; i++) {
        cin >> x;
        set2.insert(x);
    }

    
    bool is_subset = true;
    for (auto it = set1.begin(); it != set1.end(); it++) {
        if (set2.find(*it) == set2.end()) {
            is_subset = false;
            break;
        }
    }

    
    if (is_subset) {
        cout << "set1 is a subset of set2" << endl;
    } else {
        cout << "set1 is not a subset of set2" << endl;
    }

    return 0;
}

