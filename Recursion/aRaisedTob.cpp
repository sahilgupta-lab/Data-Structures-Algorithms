#include<iostream>
using namespace std;

int aRaisedToB(int a, int b){
    if(b==0)    return 1;
    return a* aRaisedToB(a, --b);
}

int main(){
    cout<<aRaisedToB(3,4);
}