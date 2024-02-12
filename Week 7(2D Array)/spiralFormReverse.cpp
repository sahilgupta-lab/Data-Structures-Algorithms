#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows and columns of the matrix: ";
    cin>>n;
    cout<<endl;

    int matrix[n][n];
   

    int arr[n*n];
    for(int i = 1; i<=n*n;i++)  arr[i-1] = i;

    int minr=0, minc=0, maxr=n-1, maxc=n-1,x=0;

    while(minr<=maxr && minc<=maxc){

        for(int i = minc; i<=maxc && x<=n*n;i++){
            matrix[minr][i]=arr[x];
            x++;
        }
        minr++;

        for(int i = minr; i<=maxr && x<=n*n; i++){
            matrix[i][maxc]=arr[x];
            x++;
        }
        maxc--;

        for(int i = maxc; i>=minc && x<=n*n; i--){
            matrix[maxr][i]=arr[x];
            x++;
        }
        maxr--;

        for(int i = maxr; i>=minr && x<=n*n; i--){
            matrix[i][minc]=arr[x];
            x++;
        }
        minc++;

    }

     for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


}