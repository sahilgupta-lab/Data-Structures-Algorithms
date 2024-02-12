#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the first array: ";
    cin>>n;

    int arr1[n];
    cout<<"Enter the elements of the first array: ";
    for(int i = 0; i<n; i++) cin>>arr1[i];

    int m;
    cout<<"Enter the size of the second array: ";
    cin>>m;

    int arr2[m];
    cout<<"Enter the elements of the second array: ";
    for(int i = 0; i<m; i++) cin>>arr2[i];

    int com[m+n];

    int i = 0, j=0, k=0;

    while(i<n && j<m){

        if(arr1[i]<=arr2[j]){
            com[k] = arr1[i];
            i++;
        }

        else{
            com[k] = arr2[j];
            j++;
        }
        k++;
    }

    // if(j==0){
        while(i<n){
            com[k] = arr1[i];
            k++;
            i++;
        }
    // }    

    // if(i==0){
        while(j<m){
            com[k] = arr2[j];
            j++;
            k++;
        }
    // }

    for(int i = 0; i<m+n; i++) cout<<com[i]<<" ";

    return 0;
}

