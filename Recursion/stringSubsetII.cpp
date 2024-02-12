//Yaar isme characters repeat ho rhe hai

#include <iostream>
using namespace std;

void subset(string input, string output, int idx, bool flag){
    if(idx==input.length()){
        cout<<output<<endl;
        return;
    }
    char ch = input[idx];
    if(!flag){
        subset(input, output, idx+1, true);
    }
    else{
        if(idx>1){
            if(input[idx]==input[idx+1]){
                subset(input, output+ch, idx+1, true);
                subset(input, output, idx+1, false);
                }
            }
    }
   

    

}

int main(){
    subset("aab", "", 0, 1);
}