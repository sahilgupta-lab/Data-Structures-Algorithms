#include<iostream>
using namespace std;

void factorial(int a){
    int fact=1;
    for(int i=a; i>0; i--){
        fact*=i;
    }

    cout<<a<<"! = "<<fact;
}

int getNum(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    return n;
}

int main(){

   int a = getNum();
   factorial(a);
}

