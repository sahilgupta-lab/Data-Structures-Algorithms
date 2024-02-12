#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    int nsp = n-1, nst = 1;
    
    for(int i = 1; i<=2*n -1; i++){
        
        //Spaces
        for(int j = 1; j<=nsp; j++){
            cout<<" ";
        }
        
        //Stars
        for(int k = 1; k<=nst; k++){
            cout<<"*";
        }
        
        if (i<n){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
    
        cout<<endl;
    }
}