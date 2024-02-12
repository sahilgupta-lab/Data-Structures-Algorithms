#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double p, r, v;
    int n;
    
    cout << fixed << setprecision(2); // set output formatting
    
    // print table headers
    cout << setw(10) << "P" << setw(10) << "r" << setw(10) << "n" << setw(10) << "V" << endl;
    
    // loop through combinations of p, r, and n
    for (p = 1000; p <= 10000; p += 1000) {
        for (r = 0.1; r <= 0.2; r += 0.01) {
            for (n = 1; n <= 10; n++) {
                v = p * pow(1 + r, n); // calculate v
                // print table row
                cout << setw(10) << p << setw(10) << r << setw(10) << n << setw(10) << v << endl;
            }
        }
    }
    
    return 0;
}
