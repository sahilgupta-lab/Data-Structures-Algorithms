#include <iostream>
using namespace std;

int main(){
    int marks[5] = {48, 33, 98, 32, 10};

    for(int i = 0; i<5; i++){
        if( marks[i]<35 ) cout<<i<<" ";
    }
}