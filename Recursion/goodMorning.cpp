#include<iostream>
using namespace std;

void func(int n){
    if(n==0)    return;
    cout<<"Good Morning"<<endl;
    func(n-1);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    func(n);
}