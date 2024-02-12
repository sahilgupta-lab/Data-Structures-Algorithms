#include<iostream>
using namespace std;

int pow(int a, int b){
    if(b==0)    return 1;
    int ans=pow(a,b/2);
    if(b%2==0)  return ans*ans;
    else    return ans*ans*2;
}

int main(){
    cout<<pow(2,7);
}