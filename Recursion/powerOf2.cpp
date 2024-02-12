//Given a positive integer, return true if it is a power of 2.

#include<iostream>
using namespace std;

bool power(int n){
    if(n==2)    return true;
    if(n%2==0){
        power(n/2);
    }
    else    return false;
}

int main(){
    cout<<power(10);
}