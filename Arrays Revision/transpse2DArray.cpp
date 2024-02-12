#include<iostream>
#include<vector>
using namespace std;

void reverse2D(vector<vector<int>> v, int m, int n){
    for(int i =0; i<m; i++){
        for(int j=0; j<i; j++){
            int temp = v[i][j];
            v[i][j]=v[j][i];
            v[j][i]=temp;
        }
    }
}

int main(){
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};

    reverse2D(matrix, 3, 3);

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}