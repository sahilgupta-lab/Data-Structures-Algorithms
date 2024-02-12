//We need to remove a particular character from a string

#include<iostream>
#include<string>
using namespace std;

void removeChar(string str, string res, int idx, char ch){
    if(idx==str.size()){
        cout<<res<<endl;
        return;
    }
    if(str[idx]!=ch)    res+=str[idx];
    removeChar(str, res, idx+1, ch);
}

int main(){
    removeChar("Sahil Gupta", "", 0, 'a');
}