//WAP to find the largest three elements in the array.

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)  cin>>arr[i];

    int l1=INT_MIN, l2 = INT_MIN, l3 = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>l1){
            l3 = l2;
            l2 = l1;
            l1 = arr[i];
        }
        if(arr[i]<l1 && arr[i]>l2){
            l3 = l2;
            l2 = arr[i];
        }
        if(arr[i]<l1 && arr[i]<l2 && arr[i]>l3){
            l3=arr[i];
        }
    }

    cout<<"The three largest elements of the array are "<<l1<<" , "<<l2<<" and "<<l3<<" respectively."<<endl;
}