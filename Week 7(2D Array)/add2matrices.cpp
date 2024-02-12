#include <iostream>
using namespace std;

int main(){

    int m, n;
    cout<<"Enter the order of the two matrices: ";
    cin>>m>>n;

    int arr1[m][n], arr2[m][n];

    cout<<"Enter the elements of the first matrix: \n";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++)    cin>>arr1[i][j];
    }

    cout<<"Enter the elements of the second matrix: \n";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++)    cin>>arr2[i][j];
    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++)    arr1[i][j]+=arr2[i][j];
    }

    cout<<"The sum of the two matrics is \n";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }    


}