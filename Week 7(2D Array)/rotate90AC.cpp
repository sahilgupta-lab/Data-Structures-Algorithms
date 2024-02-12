#include<iostream>
#include<algorithm>
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
    cout<<endl;

    for(int i = 0; i<m; i++){
        for(int j = 0; j<i; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    

    for(int i = 0; i<n; i++){
        int minr=0, maxr=m-1;
        while(maxr>minr){    
            swap(arr[minr][i], arr[maxr][i]);
            minr++;
            maxr--;
        }
    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }






}