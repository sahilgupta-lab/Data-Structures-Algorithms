#include <iostream>
using namespace std;

int main(){

    //Taking the input of first set from the user
    int n;
    cout<<"Enter the size of the first set: ";
    cin>>n;

    int arr1[n];
    cout<<"Enter the elements of the first set: ";
    for(int i = 0; i<n; i++) cin>>arr1[i];

    //Taking the input of second set from the user
    int m;
    cout<<"Enter the size of the second set: ";
    cin>>m;

    int arr2[m];
    cout<<"Enter the elements of the second set: ";
    for(int i = 0; i<m; i++) cin>>arr2[i];

    //Union
    cout<<arr1 || arr2;


}