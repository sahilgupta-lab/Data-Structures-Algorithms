#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream input("file.txt");
    ofstream output("output.txt");
    string str;

    while (getline(input, str)) {
        output << str << endl << endl; // Two endl because we want one extra line
    }

    input.close();
    output.close(); // Close the output stream

    return 0;
}
