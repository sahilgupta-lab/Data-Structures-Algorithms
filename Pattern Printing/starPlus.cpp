#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
   for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if (i == (n+1)/2 || j == (n+1)/2)
            cout<<"*";
            else
            cout<<" ";
        
        }
        cout<<endl;
    }
}