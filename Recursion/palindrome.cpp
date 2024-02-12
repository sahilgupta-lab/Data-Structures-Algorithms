#include<iostream>
#include<string>
using namespace std;

bool palindrome(string str, int idxF, int idxL){
    if(idxF>idxL){
        return true;
    }  
    if(str[idxF]!=str[idxL]){
        return false;
    }    
    return palindrome(str, idxF+1, idxL-1);
}

int main(){
    cout<<palindrome("acdca", 0, 4);
}