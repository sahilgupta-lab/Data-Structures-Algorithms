#include<iostream>
using namespace std;

void hanoi(char a, char b, char c, int n){
    if(n==0)    return;
    hanoi(a, c, b, n-1);
    cout<<a<<"->"<<c<<endl;
    hanoi(b,a,c,n-1);
}

int main(){
    hanoi('A','B','C',3);
}