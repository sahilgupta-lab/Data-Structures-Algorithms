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

int helper( int arr[], int sIdx, int eIdx, int k){
    int piv = partition(sIdx, eIdx, arr);
    if(piv == k-1)   return arr[piv];
    else if(piv > k-1)   return helper(arr, sIdx, piv-1,k);
    else    return helper(arr, piv+1, eIdx, k);
}


int kthLargestElement(int arr[], int n, int k){
    int sIdx = 0;
    int eIdx = n-1;
    if(k<sIdx || k>eIdx){
        cout<<"Invalid value of k"<<endl;
        return -1;
    }
    return helper(arr, sIdx, eIdx, k);
}

int main(){
    int arr[] = {1,8,3,0,3,9,0,23,10,19};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<kthLargestElement(arr,n,7);
    cout<<endl;
}