//Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

#include<iostream>
using namespace std;

int main(){
    //Input array
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++)    cin>>arr[i];
    bool flag = 0;

    //Check & print 
    for(int i = 0; i<n; i++){
        for(int j = 0; j!=i; j++){
            if(arr[i]!=arr[j]){
                flag = 1;
            }
        }
    }

    return 0;
}