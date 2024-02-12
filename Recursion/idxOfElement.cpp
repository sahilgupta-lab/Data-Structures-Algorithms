//Print index of a given element in an array. If not present, print -1.

#include<iostream>
using namespace std;

int idxOfElement(int arr[], int n, int element){
    if(arr[n-1]==element)   return n-1;
    if(n==0)    return -1;
    idxOfElement(arr, n-1, element);
}

int main(){
    int array[] = {1,2,3,4,5};

    cout<<idxOfElement(array, 5, 8);
}