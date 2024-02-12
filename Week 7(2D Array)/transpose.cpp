#include<iostream>
using namespace std;

int main(){

    int m, n;
    cout<<"Enter the order of the matrix: ";
    cin>>m>>n;

    int arr[m][n], res[n][m];

    cout<<"Enter the elements of the matix: \n";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            res[i][j]=arr[j][i];
        }
    }

    cout<<"The transpose of the entered matrix is: \n";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}