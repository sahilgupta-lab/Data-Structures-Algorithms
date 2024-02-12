#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows and columns of the first matrix: ";
    cin>>m>>n;

    int p,q;
    cout<<"\nEnter the number of rows and columns of the second matrix: ";
    cin>>p>>q;

    if(n!=p)    cout<<"\nMultiplication is not possible\n";
    else{

        vector<vector<int>> v1(m,vector<int>(n));
        cout<<"\nEnter the elements of the first matrix: \n";
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++)    cin>>v1[i][j];
        }

        vector<vector<int>> v2(p,vector<int>(q));
        cout<<"\nEnter the elements of the second matrix: \n";
        for(int i = 0; i<p; i++){
            for(int j = 0; j<q; j++)    cin>>v2[i][j];
        }

        vector<vector<int>> res(m,vector<int>(q));
        int temp;
        for(int i = 0; i<m;i++){
            for(int k = 0; k<m; k++){
                res[i][k]=0;
                for(int j = 0; j<p; j++){
                    res[i][k] += v1[i][j]*v2[j][k];
                }
            }
        }

        cout<<"\nThe multiplication of the two matrices is: \n";
        for(int i = 0; i<m; i++){
            for(int j = 0; j<q; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;    
        }  
    }

}
   


