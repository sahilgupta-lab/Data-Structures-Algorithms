#include<iostream>
using namespace std;

int partition(int sIdx, int eIdx, int arr[]){
    int pivIdx = sIdx, count = 0;

    for(int i=sIdx+1; i<=eIdx; i++){
        if(arr[i]<=arr[pivIdx])   count++;
    }

    pivIdx += count;

    swap(arr[pivIdx], arr[sIdx]);

    while(sIdx < pivIdx && eIdx > pivIdx){
        if (arr[sIdx] <= arr[pivIdx])    sIdx++;
        if (arr[eIdx] > arr[pivIdx])    eIdx--;
        else if( arr[sIdx] > arr[pivIdx] && arr[eIdx] <= arr[pivIdx]){
            swap( arr[sIdx], arr[eIdx]);
            sIdx++;
            eIdx--;
        }
    }

    return pivIdx;
}

void helper( int arr[], int sIdx, int eIdx){
    if(sIdx >= eIdx)    return;

    int piv = partition(sIdx, eIdx, arr);
    helper(arr, sIdx, piv-1);
    helper(arr, piv+1, eIdx);
}



void quickSort(int arr[], int n){
    int sIdx = 0;
    int eIdx = n-1;
    helper(arr, sIdx, eIdx);
}

int main(){
    int arr[] = {1,8,3,0,3,9,0,23,10,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,n);

    for(int i=0; i<10; i++)     cout<<arr[i]<<" ";
    cout<<endl;
}