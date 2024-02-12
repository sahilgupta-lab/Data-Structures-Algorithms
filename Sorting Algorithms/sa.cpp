#include <iostream>
#include<climits>
using namespace std;

void bs(int arr[], int n){
    for(int i=0; i<n; i++){
        bool flag = true;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1])   swap(arr[j], arr[j+1]);
            flag = false;
        }
        if(flag)    break;
    }
}

void ss(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min_idx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min_idx])    min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }
}

void is(int arr[], int n){
    for(int i=1; i<n; i++){
        int j = i;
        while (j>0 && arr[j-1] > arr[j]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

int main(){
    int arr[] = {5,3,4,1,2};
    int n = sizeof(arr)/sizeof(int);

    is(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}