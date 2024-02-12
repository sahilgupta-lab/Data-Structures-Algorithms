#include<iostream>
using namespace std;

int main(){

    int m, n;
    cout<<"Enter the number of rows and columns of the matrix: ";
    cin>>m>>n;

    int matrix[m][n];
    cout<<"\nEnter the elements of the matrix:\n";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"\nThe wave form is: \n";
    for(int i = 0; i<m; i++){
        if(i%2==0){
            for(int j = 0; j<n; j++)    cout<<matrix[i][j]<<" ";
        }
        else{
            for(int j = n-1; j>=0; j--)    cout<<matrix[i][j]<<" ";

        }
    }
}