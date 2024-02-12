#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    for(int i = 1; i<= 2*n - 1; i++){
        for(int j = 1; j<= 2*n - 1; j++){
            int a = i, b = j;
            if(a>n) a = 2*n - i;
            if(b>n) b = 2*n - j;
            
            cout<<n - min(a,b) + 1;
        
        }
        cout<<endl;
    }
    
}