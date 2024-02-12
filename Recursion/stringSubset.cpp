#include<iostream>
#include<string>
using namespace std;

void subset(string input, string output, int idx){
    if(idx==input.length()){
        cout<<output<<endl;
        return;
    }
    char ch = input[idx];
    subset(input, output, idx+1);
    subset(input, output+ch, idx+1);
}

int main(){
    subset("abc","",0);
}