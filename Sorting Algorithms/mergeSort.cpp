#include<iostream>
using namespace std;

void mergeArrays(int arr1[], int sizeArr1,int arr2[], int sizeArr2, int res[]){
    int i = 0, j = 0;

    while(i<sizeArr1 && j<sizeArr2){
        if(arr1[i] <= arr2[j]){
            res[i+j] = arr1[i];
            i++; 
        }
        else{
            res[i+j] = arr2[j];
            j++;
        }
    }

    if(i<sizeArr1){
        while(i<sizeArr1){
            res[i+j] = arr1[i];
            i++; 
        }
    }

    if(j<sizeArr2){
        while(j<sizeArr2){
            res[i+j] = arr2[j];
            j++; 
        }
    }
}

void mergeSort(int arr[], int n){
    
    if(n==1)    return;

    int sizeOfFirstHalf = n/2;
    int sizeOfSecondHalf = n - sizeOfFirstHalf;

    int arrayFirstHalf [sizeOfFirstHalf];
    int arraySecondHalf [sizeOfSecondHalf];

    for(int i=0; i<sizeOfFirstHalf; i++)    arrayFirstHalf[i] = arr[i];
    for(int i=0; i<sizeOfSecondHalf; i++)    arraySecondHalf [i] = arr[i+sizeOfFirstHalf];

    mergeSort(arrayFirstHalf, sizeOfFirstHalf);
    mergeSort(arraySecondHalf, sizeOfSecondHalf);

    mergeArrays(arrayFirstHalf, sizeOfFirstHalf, arraySecondHalf, sizeOfSecondHalf, arr);
    delete arrayFirstHalf;
    delete arraySecondHalf; //to save space
}

int main(){
    int arr[] = {1,8,3,0,3,9,0,23,10,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,n);

    for(int i=0; i<10; i++)     cout<<arr[i]<<" ";
    cout<<endl;
}