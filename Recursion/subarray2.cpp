#include<iostream>
#include<vector>
using namespace std;

void subarray(vector<int> &input, vector<int> &output, int idx) {
    if (idx == input.size()) {
        for (int i = 0; i < output.size(); i++) {
            cout << output[i] << " ";
        }
        cout << endl;
        return;
    }

    subarray(input, output, idx + 1);

    // Check for consecutive equal elements
    if (idx == 0 || input[idx] != input[idx - 1]) {
        output.push_back(input[idx]);
        subarray(input, output, idx + 1);
        output.pop_back();
    }
}

int main() {
    vector<int> input = {1, 2, 3, 4};
    vector<int> output;

    subarray(input, output, 0);

    return 0;
}
