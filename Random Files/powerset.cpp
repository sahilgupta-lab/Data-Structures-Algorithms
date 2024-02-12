#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int main() {
    set<int> set1;
    int n, x;

    // input size of set1 and its elements
    cout << "Enter size of set1: ";
    cin >> n;
    cout << "Enter elements of set1: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        set1.insert(x);
    }

    // compute power set of set1
    int num_subsets = pow(2, set1.size());
    for (int i = 0; i < num_subsets; i++) {
        cout << "{ ";
        int k = 0;
        for (auto it = set1.begin(); it != set1.end(); it++) {
            if (i & (1 << k)) {
                cout << *it << " ";
            }
            k++;
        }
        cout << "}" << endl;
    }

    return 0;
}
