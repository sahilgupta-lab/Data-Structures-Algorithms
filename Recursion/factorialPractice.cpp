// Program to find the factorial of a given number.

#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1)    return 1;
    return n*factorial(n-1);
}

int main(){
    cout<<factorial(5);
}