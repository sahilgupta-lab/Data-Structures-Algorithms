//print all increasing subsequence of length k from first n natural numbers
#include<iostream>
#include<vector>
using namespace std;

void printSubsequence(vector<int> &input, vector<int> &temp,  vector<vector<int>> &output, int idx, int k){
    if(k<=0 || k>input.size()){
        cout<<"Invalid value of k"<<endl;
        return;
    }
    if(idx==input.size()){
        output.push_back(temp);
        return;
    }if((temp.size()+ input.size() - idx -1)<k)  return;
    
    temp.push_back(input[idx]);
    printSubsequence(input, temp, output, idx+1, k);
    temp.pop_back();
    printSubsequence(input, temp, output, idx+1, k);
}

int main(){
    vector<int> input = {1,2,3,4,5}, temp;
    vector<vector<int>> output;

    printSubsequence(input,temp,output, 0, 3);

    for(int i=0; i<output.size(); i++){
        if(output[i].size()==3){
            for(int j=0; j<output[i].size(); j++){
            cout<<output[i][j];
        }
        cout<<" ";
    }
}
        
    cout<<endl;
}