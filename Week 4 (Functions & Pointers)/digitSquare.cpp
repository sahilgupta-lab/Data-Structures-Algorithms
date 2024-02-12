#include<iostream>
using namespace std;

int digitSquare(int n){
    int numOfDigits = 0;
    
    while(n>0){
        n/=10;
        numOfDigits++;
    }
    
    return numOfDigits*numOfDigits;
}

int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    
    cout<<"The square of the digits of the entered number is "<<digitSquare(a)<<endl;  
    
}

