#include<iostream>
using namespace std;

int main(){
    
    int n, low = 0, mid = 0, high;
    cout<<"Enter the size of the array: ";
    cin>>n;
    high = n-1;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++) cin>>arr[i];

    while(mid<=high){

        if(arr[mid]==2){
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }

        else if(arr[mid]==0){
            int temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            low++;
            mid++;
        }

        else mid++;
    }

    for(int i = 0; i<n; i++)    cout<<arr[i]<<" ";
    
    return 0;
}