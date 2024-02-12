//Find the second largest element in the given Array in one pass.

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the arrray: ";
    for(int i=0; i<n; i++)  cin>>arr[i];

    int fLargest = INT_MIN;
    int sLargest = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>fLargest){
            sLargest=fLargest;
            fLargest=arr[i];
        }
        if(arr[i]>sLargest && arr[i]<fLargest){
            sLargest=arr[i];
        }
    }

    cout<<"The second largest element of the array is "<<sLargest<<endl;
}