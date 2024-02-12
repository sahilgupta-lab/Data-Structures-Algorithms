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


    set<pair<int, int>> cartesian_product;
    for (auto i : set1) {
        for (auto j : set2) {
            cartesian_product.insert(make_pair(i, j));
        }
    }

    
    cout << "Cartesian product of set1 and set2: {";
    for (auto it = cartesian_product.begin(); it != cartesian_product.end(); it++) {
        cout << "(" << it->first << ", " << it->second << ")";
        if (next(it) != cartesian_product.end()) {
            cout << ", ";
        }
    }
    cout << "}" << endl;

    return 0;
}
