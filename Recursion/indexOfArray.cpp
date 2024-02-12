#include<iostream>
using namespace std;

int indexArray(int arr[], int n, int num){
    if(n<1) return -1;
    if(arr[n-1]==num){
        return n-1;
    }
    else    indexArray(arr,n-1,num);
}


int main(){
    int nums[]={1,2,3,4,5};

    cout<<indexArray(nums,5,8);
}