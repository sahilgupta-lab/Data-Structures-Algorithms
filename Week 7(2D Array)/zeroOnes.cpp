// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.
// Input :
// 1 1 1
// 1 0 1
// 1 1 1
// Output :
// 1 0 1
// 0 0 0
// 1 0 1

#include<iostream>
using namespace std;

int main(){

    int m,n;
    cout<<"Enter the order of the matrix: ";
    cin>>m>>n;

    int arr[m][n];
    cout<<"\nEnter the elements of the matrix: \n";
     for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++)    cin>>arr[i][j];
    }
    

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(arr[i][j]==0){
                   for(int k=0; k<m; k++){
                        if(arr[k][j]!=0)    arr[k][j]=-1;
                   }  
                   for(int l=0; l<n;l++){
                        if(arr[i][l]!=0)    arr[i][l]=-1;
                   }  
                }
            }
        }

     for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(arr[i][j]==-1)    arr[i][j]=0;
        }
    }

    cout<<endl;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;    
    }
}