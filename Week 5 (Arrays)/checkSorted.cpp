#include <iostream>
using namespace std;

int main(){
    //Input array 
    int n, x, count=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++) cin>>arr[i];

    //Check
    bool flag = 1;
    for(int i = 0, j = 1; i<n-1, j<n ; i++, j++){
            if(arr[i]>arr[j]) flag = 0;
        }

    //Print result
    if(flag == 1)    cout<<"The array is sorted";
    else    cout<<"The array is not sorted";

    return 0;
}