//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)  cin>>arr[i];

    int oddSum=0, evenSum=0;

    for(int i=0; i<n; i++){
        if(i%2==0)  evenSum+=arr[i];
        else    oddSum+=arr[i];
    }

    cout<<"The difference between the sum of elements at even indices to the sum of elements at odd indices is "<<evenSum-oddSum<<endl;
}
//Note: We are considering 0 based indexing