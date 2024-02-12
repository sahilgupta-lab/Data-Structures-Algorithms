#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the square matrix: ";
    cin>>n;

    int arr[n][n];
    cout<<"\nEnter the elements of the square matrix:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)  cin>>arr[i][j];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    cout<<"\nThe transpose of the matrix is: \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}