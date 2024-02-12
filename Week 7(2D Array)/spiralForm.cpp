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

    int minr = 0, maxr = m-1, minc = 0, maxc= n-1, nOE= 0;

    cout<<"\nThe spiral form of the matrix is: \n";

    while(minr<=maxr && minc<=maxc){

        for(int i = minc; i<=maxc && nOE <=m*n; i++){
            cout<<matrix[minr][i]<<" ";
            nOE++;
        }
        minr++;

        for(int i = minr; i<=maxr && nOE <=m*n; i++){
            cout<<matrix[i][maxc]<<" ";
            nOE++;
        }
        maxc--;

        for(int i = maxc; i>=minc && nOE <=m*n; i--){
            cout<<matrix[maxr][i]<<" ";
            nOE++;
        }
        maxr--;

        for(int i = maxr; i>=minr && nOE <=m*n; i--){
            cout<<matrix[i][minc]<<" ";
            nOE++;
        }
        minc++;
    }
}