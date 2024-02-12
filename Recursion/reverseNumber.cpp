#include<iostream>
using namespace std;

int reverseNum(int n, string s){
    if(n==0)    return 0;
    int s=(n%10);
    reverseNum(n/10,s);

}


int main(){
    cout<<reverseNum(123,"");
}