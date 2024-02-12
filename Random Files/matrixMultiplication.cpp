#include<iostream>
using namespace std;

int main(){

    int m,n;
    cout<<"Enter the size of the first matrix: ";
    cin>>m>>n;

    int p,q;
    cout<<"Enter the size of the second matrix matrix: ";
    cin>>p>>q;

    int matrix1[m][n];
    int matrix2[p][q];
    int res[m][q];

    cout<<"\nEnter the elements of the first matrix:\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)  cin>>matrix1[i][j];
    }

    cout<<"\nEnter the elements of the second matrix:\n";
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++)  cin>>matrix2[i][j];
    }

    if(n!=p)    cout<<"Multiplication is not possible"<<endl;
    else{
        for(int i=0; i<m; i++){
            for(int j=0; j<q;j++){
                res[i][j]=0;
                for(int k=0; k<n; k++){
                    res[i][j]+=matrix1[i][k]*matrix2[k][j];
                }
            }
        }
        
        
        
        cout<<"\nThe multiplication of the matrix is: \n";
            for(int i=0; i<m; i++){
                for(int j=0; j<q; j++){
                    cout<<res[i][j]<<" ";
                }
                cout<<endl;
            }
    }
    
}