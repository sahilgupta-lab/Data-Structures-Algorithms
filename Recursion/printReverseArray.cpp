//Print all the elements of an array in reverse order.

#include<iostream>
using namespace std;

void reverseArr(int arr[], int n){
    if(n<1) return;
    cout<<arr[n-1]<<" ";
    reverseArr(arr, n-1);
}

int main(){
    int nums[]={1,2,3,4,5};
    reverseArr(nums, 5);

}