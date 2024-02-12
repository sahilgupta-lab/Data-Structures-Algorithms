#include<iostream>
using namespace std;

void sortBS(int array[], int n){
    for(int i = 0; i<=n-2; i++){
        for(int j=0; j<=n-2; j++){
            int k = j+1;
            if(array[k]<array[j]){
                int temp = array[j];
                array[j] = array[k];
                array[k] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {7, 5, 3, 9 , 8, 2, 10};

    sortBS(arr, 7);
    for(int i=0; i<7; i++)  cout<<arr[i]<<" ";



}