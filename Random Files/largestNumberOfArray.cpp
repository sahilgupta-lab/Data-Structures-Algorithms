#include<iostream>
using namespace std;

int main(){

    int arr[9]={1,3,8,2,7,9,7,9,10};

    int *ptr= arr;

    int larg = *ptr;
    for(int i=0; i<9; i++){
        if(*ptr>larg)    larg=*ptr;
        ptr++;
    }

    cout<<"The largest element is "<<larg<<endl;
}