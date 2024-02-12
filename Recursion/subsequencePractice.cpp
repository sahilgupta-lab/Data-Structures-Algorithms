//Print all the increasing sequences of length k from first n natural numbers.

#include<iostream>
#include<vector>
using namespace std;

void sequence(vector<int> &input, vector<int> &temp, int idx, int k){
    if(idx==input.size()){
        if(temp.size()==k){
            for(int i=0; i<k; i++)  cout<<temp[i];
            cout<<endl;
        }
        return;
    }
    temp.push_back(input[idx]);
    sequence(input, temp, idx+1, k);
    temp.pop_back();
    sequence(input, temp, idx+1, k);
}

int main(){
    vector<int> input = {1,2,3,4,5};
    vector<int> temp;

    sequence(input, temp, 0, 3);
}