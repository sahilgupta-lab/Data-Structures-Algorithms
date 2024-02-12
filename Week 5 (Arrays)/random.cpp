#include<iostream>
#define pi 3.14
using namespace std;

void main(){
   int a = 10;
   cout<<squareArea(a) << " ";
   cout<<circleArea(a)<<" ";
   cout<<a<<endl;
}

int squareArea(int &a){
    return a*=a;
}

int circleArea(int &r){
    return r = pi*r*r;
}