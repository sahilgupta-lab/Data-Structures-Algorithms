#include<iostream>
using namespace std;

int maze(int rowIdx, int colIdx){
    if(rowIdx==1)   return 1;
    if(colIdx==1)   return 1;
    int down = maze(rowIdx-1, colIdx);
    int right = maze(rowIdx, colIdx-1);
    return down + right;
}

int main(){
    cout<<maze(3,3);
}