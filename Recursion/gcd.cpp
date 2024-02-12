//using euclid's division lemma

#include<iostream>
using namespace std;

int gcd(int dividend, int divisor){ //dividend < divisor
    if(divisor==1)  return 1;
    if(dividend % divisor==0) return divisor;
    return  gcd(divisor, dividend%divisor);
}

int main(){
    cout<<gcd(3,10);
}