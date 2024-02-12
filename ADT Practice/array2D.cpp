#include<iostream>
using namespace std;

class Array2D{
    int row;
    int col;
    int **arr;

    public:
    Array2D(int r, int c){
        row = r;
        col = c;
        
        arr = new int*[row];
        for(int i=0; i<row; i++)    arr[i] = new int[col];
    }

    void setValue(int r, int c, int val){
        if(r<0 || r>=row || c<0 || c>=col){
            cout<<"Invalid Index"<<endl;
            return;
        }
        arr[r][c] = val;
    }

    int getValue(int r, int c){
        if(r<0 || r>=row || c<0 || c>=col){
            cout<<"Invalid Index"<<endl;
            return -1;
        }
        return arr[r][c];
    }

    void display(){
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};


int main(){
    Array2D arr(2,2);
    arr.setValue(0,0,10);
    arr.setValue(0,1,20);
    arr.setValue(1,0,30);
    arr.setValue(1,1,40);
    cout<<arr.getValue(0,0)<<endl;
    arr.display();
}