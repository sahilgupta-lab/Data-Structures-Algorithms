/*
Inversions mtlb when i < j but arr[i] > arr[j]
*/

#include<iostream>
using namespace std;

int counting( int arr1[], int n1, int arr2[], int n2){
    int count = 0;

    int i=0, j=0;

    while( i<n1 && j<n2){
        if(arr1[i] > arr2[j]){
            count += n1 - i;
            j++;
        }
        else    i++;
    }

    return count;
}

void merge( int arr1[], int n1, int arr2[], int n2, int arr[] ){
    int i = 0, j = 0, k = 0;

    while ( i < n1 && j < n2){
        if ( arr1[i] <= arr2[j] )   arr[k++] = arr1[i++];
        else    arr[k++] = arr2[j++];
    }

    while ( i < n1 )    arr[k++] = arr1[i++];
    while ( j < n2 )    arr[k++] = arr2[j++]; 

}

int countInversions(int arr[], int n){
    if ( n == 1 )     return 0;
    int n1 = n/2, n2 = n - n/2, arr1[n1], arr2[n2];

    for ( int i = 0; i < n; i++ ){
        if ( i < n1)    arr1[i] = arr[i];
        else    arr2[i - n1] = arr[i];
    }

    int count = 0;

    count += countInversions( arr1, n1 );
    count += countInversions( arr2, n2 );

    count += counting(arr1, n1, arr2, n2);

    merge( arr1, n1, arr2, n2, arr);
    delete arr1; 
    delete arr2;

    return count;
}

int main(){
    int arr[] = {5,1,3,0,4,2,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<countInversions( arr, n );

}