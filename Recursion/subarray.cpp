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

    

    if (output.empty() || output.back() == input[idx - 1]) {
        output.push_back(input[idx]);
        subarray(input, output, idx + 1);
        output.pop_back();
    }

    subarray(input, output, idx + 1);
}

int main() {
    vector<int> input = {1, 2, 3, 4};
    vector<int> output;

    subarray(input, output, 0);

    return 0;
}
