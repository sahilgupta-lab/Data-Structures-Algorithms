#include<iostream>
using namespace std;

//parameterised
// void sumToN(int s=0, int n=0){
//     if(n==0){
//         cout<<s<<endl;
//         return;
//     }    
//     sumToN(s+n, n-1);
// }

//Non-parameterised
int sumToN(int n){
    if(n==0)    return 0;
    return n+sumToN(n-1);
}

int main(){
    sumToN(5);
}