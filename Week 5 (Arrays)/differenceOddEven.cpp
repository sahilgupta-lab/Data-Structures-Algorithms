#include <iostream>
using namespace std;

int main(){
    //Input array 
    int n, x, oddSum = 0, evenSum = 0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++) cin>>arr[i];

    //Check Odd/Even
    for(int i = 0; i<n; i++){
        if(i%2==0) evenSum+=arr[i];
        else oddSum+=arr[i];
    }

    //Print result
    cout<<"The difference between the elements at even index and odd index is "<<evenSum-oddSum;

    return 0;
}