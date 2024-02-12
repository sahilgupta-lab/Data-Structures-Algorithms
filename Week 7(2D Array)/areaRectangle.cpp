#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int m,n;
    cout<<"Enter the number of rows and columns of the matrix: ";
    cin>>m>>n;

    int arr[m][n];
    cout<<"\nEnter the elements of the matrix:\n";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++)    cin>>arr[i][j];
    }

    int l1, r1, l2, r2, area=0;
    cout<<"\nEnter the value of l1 and r1 and l2 and r2: ";
    cin>>l1>>r1>>l2>>r2;

    if(l1>l2)   swap(l1,l2);
    if(r1>r2)   swap(r1,r2);

    for(int i = l1; i<=l2; i++){
        for(int j = r1; j<=r2; j++) area+=arr[i][j];
    }

    cout<<"\nThe area of the rectangle is "<<area<<endl;

}