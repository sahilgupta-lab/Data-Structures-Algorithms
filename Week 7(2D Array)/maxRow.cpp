#include<iostream>
#include<climits>
using namespace std;

int main(){

    int m,n;
    cout<<"Enter the number of rows and columns of the matrix: ";
    cin>>m>>n;

    int arr[m][n];

    cout<<"\nEnter the elements of the matrix: \n";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++)    cin>>arr[i][j];
    }

    int sum[m]={0}, lSum=INT_MIN, temp=0;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            sum[i]+=arr[i][j];
            if(sum[i]>lSum){
                lSum = sum[i];
                temp=i+1;
            } 
        }
    }

    cout<<"\nThe row with the highest sum is "<<temp<<endl;
}