#include<iostream>
using namespace std;

void reverse(int n, int& res){
    if(n==0)    return;
    res*=10;
    res+=n%10;
    reverse(n/10, res);
}

int main(){
    int n=12345, res=0;

    reverse(n, res);

    cout<<res<<endl;
}