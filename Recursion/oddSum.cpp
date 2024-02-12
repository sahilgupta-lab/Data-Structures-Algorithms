//Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.
#include<iostream>
using namespace std;

int sum(int a, int b){
    if(a%2==0)  a+=1;
    if(a>b) return 0;
    return a+ sum(a+2,b);
}

int main(){
    cout<<sum(10,20);
}