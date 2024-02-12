#include <iostream>
using namespace std;

int main(){

    int n, n0 = 0, n1 = 0;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++) cin>>arr[i];

    for(int i = 0; i<n; i++){
        if (arr[i] == 0) n0++;
        if (arr[i] == 1) n1++;
    }

    for(int i = 0; i<n; i++){
        if (i<n0) arr[i]=0;
        else if (i<n1+n0) arr[i]=1;
        else arr[i]=2;
    }

    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";

    return 0;
}