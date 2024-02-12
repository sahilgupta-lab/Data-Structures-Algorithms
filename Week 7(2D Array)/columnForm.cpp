#include<iostream>
using namespace std;

int main(){

    int m,n;
    cout<<"Enter the number of rows and columns of the matrix: ";
    cin>>m>>n;

    int arr[m][n];
    cout<<"\nEnter the elements of the matrix: \n";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int j = 0; j<n; j++){
            if(j%2==0){
                for(int k = n-1; k>=0; k--) cout<<arr[k][j]<<" ";
        }
            else{
                for(int i = 0; i<n; i++)    cout<<arr[i][j]<<" ";

        }
    }
}