//Only applicable for numbers in the range 0 to n-1 or 1 to n

#include<iostream>
using namespace std;

void cyclicSort(int arr[], int n){  // 1 to n-1
        int i = 0;
        while(i<n-1){
            int actualIdx = arr[i] - 1;
            if(i!=actualIdx)     swap(arr[i], arr[actualIdx]);
            else    i++;
    }   
}


int main(){
    int arr[] = {4,2,3,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cyclicSort(arr, n);

    for(int i=0; i<n; i++)  cout<<arr[i]<<" ";
    cout<<endl;
}