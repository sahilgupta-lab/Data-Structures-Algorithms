#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream input1("random.txt");
    ifstream input2("random2.txt");
    ofstream output("output.txt");

    

    string s1, s2;

    while (getline(input1, s1) && getline(input2, s2)) {
        output << s1 << '\n' << s2 << '\n';
    }

    while (getline(input1, s1)) {
        output << s1 << '\n';
    }

    while (getline(input2, s2)) {
        output << s2 << '\n';
    }

    // Close all the files
    input1.close();
    input2.close();
    output.close();

    cout << "Files merged successfully!\n";

    return 0;
}
