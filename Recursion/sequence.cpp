//1234321 if n=4

#include<iostream>
using namespace std;

void sequence1(int n){
    if(n==0)    return;
    sequence1(n-1);
    cout<<n;
}

void sequence2(int n){
    if(n==1)    return;
    cout<<n-1;
    sequence2(n-1);
}

void sequence(int n){
    sequence1(n);
    sequence2(n);
}

//function with two parameters

void sequence(int n, int i){
    if(i>n) return;
    cout<<i;
    sequence(n,i+1);
    if(i>1) cout<<i-1;
}

int main(){
    sequence(4);
    cout<<endl;
    sequence(5,1);
}