#include<iostream>
using namespace std;

int main(){

    int m, n;
    cout<<"Enter the number of rows and columns of the array: ";
    cin>>m>>n;

    int arr[m][n];

    cout<<"Enter the elements of the array: \n";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++)    cin>>arr[i][j];
    }

    int lNum = arr[0][0];

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if (arr[i][j]>lNum) lNum=arr[i][j];
        }
    }

    cout<<"The largest element in the array is "<<lNum<<endl;
}