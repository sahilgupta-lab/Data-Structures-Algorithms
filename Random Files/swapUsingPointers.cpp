#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 8;

    int *ptr_a=&a;
    int *ptr_b=&b;

    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    cout<<a<<" "<<b<<endl;
}