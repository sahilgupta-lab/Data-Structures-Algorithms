/*
1234
1234
1234
*/


#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of rows and columns: ";
    cin>>n>>m;
    
    for(int i = 0; i<n; i++){
        for(int j = 1; j<=m; j++){
          cout<<j;
        } 
        cout<<endl;
    }
}