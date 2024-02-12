//generate all binary strings of length n without consecutive 1s

#include<iostream>
#include<string>
using namespace std;

void binaryStrings(string str, int n){
    if(str.length()==n){
        cout<<str<<endl;
        return;
    }
    binaryStrings(str + '0', n);
    if(str.length()==0 || str.back()!='1')
        binaryStrings(str + '1', n);

}

int main(){
    binaryStrings("", 3);
}