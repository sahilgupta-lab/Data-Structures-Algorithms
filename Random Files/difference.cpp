#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    set<int> set1, set2, diff;
    int n, m, x;

    
    cout << "Enter size of set1: ";
    cin >> n;
    cout << "Enter elements of set1: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        set1.insert(x);
    }

    cout << "Enter size of set2: ";
    cin >> m;
    cout << "Enter elements of set2: ";
    for (int i = 0; i < m; i++) {
        cin >> x;
        set2.insert(x);
    }


    set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(),
                   inserter(diff, diff.begin()));

    cout << "Difference is: ";
    for (auto it = diff.begin(); it != diff.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
