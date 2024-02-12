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

    int fMin = arr[0];
    int sMin = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>fMin) fMin=arr[i];
        if(arr[i]>sMin && arr[i]<fMin)  sMin=arr[i];
    }

    cout<<"The second largest of the array is "<<sMin<<endl;
    
}