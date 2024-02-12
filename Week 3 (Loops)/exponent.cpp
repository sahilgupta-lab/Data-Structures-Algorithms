#include <iostream>
using namespace std;

int main(){
    int a, b;
    
    cout<<"Enter the two numbers : ";
    cin>>a>>b;
    int x = a;
    
    
    
    for (int i = 2; i<=b; i++) x*=a;
    
    cout<<a<<" raised to the power "<<b<<" is "<<x;
    
}

