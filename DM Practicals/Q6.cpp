#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of vertices in the graph: ";
    cin>>n;

    int arr[n][n];

    cout<<"Enter the adjacency matrix of the graph: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    bool flag=1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                if(arr[i][j]!=1){
                    flag =0;
                    break;
                }
            }
            else{
                if(arr[i][j]==1){
                    flag =0;
                    break;
               }
            }
        }
    }

    if(flag)    cout<<"The entered graph is a complete graph"<<endl;
    else    cout<<"The entered graph is not a complete graph"<<endl;

}


