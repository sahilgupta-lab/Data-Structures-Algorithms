#include<iostream>
#include<climits>
using namespace std;

int maxOfArray(int array[], int n){
    if(n==0)    return INT_MIN;
    return max(array[n-1], maxOfArray(array, n-1));
}

int main(){
    int arr[] = {1,2,9,4,5};
    cout<<maxOfArray(arr, 5);
}