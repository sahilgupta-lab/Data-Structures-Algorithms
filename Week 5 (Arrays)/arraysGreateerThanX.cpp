#include <iostream>
using namespace std;

int main(){
    //Input array & element
    int n, x, count=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++) cin>>arr[i];

    cout<<"Enter the value of x: ";
    cin>>x;

    //Check 
    for(int i = 0; i<n; i++){
        if(arr[i]>x) count++;
    }

    //Print result
    cout<<"The elements of the array greater than "<<x<<" is/ are: "<<count;


    return 0;
}