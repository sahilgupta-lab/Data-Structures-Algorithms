#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of rows and columns of the square matrix: ";
    cin>>n;

    int arr[n][n];

    cout<<"Enter the elements of the matrix: \n";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++)    cin>>arr[i][j];
    }

     for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    cout<<"The transpose of the matrix is \n";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;    
    }    

}