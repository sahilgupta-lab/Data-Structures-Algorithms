#include <iostream>
using namespace std;

const int n=3;

void setArrData(int array[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"Enter the element at location "<<i<<" "<<j<<" : ";
            cin>>array[i][j];
        }
    }
}

void printArrData(int array[n][n]){
    cout<<endl<<"The elements of the array are: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}

float getAverage(int array[n][n]){
    float total=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            total+=array[i][j];
        }
    }
    return total/(n*n);
}

void findmax(int array[n][n]){
    cout<<endl;
    for(int j=0; j<n; j++){
        int max = array[0][j];
        for(int i=0; i<n; i++){
            if(array[i][j]>max)   max=array[i][j];
        }
        cout<<"The highest element in column "<<j<<" is: "<<max<<endl;
    }
}

int main(){
    

    int arr[n][n];
    setArrData(arr);
    printArrData(arr);
    cout<<endl<<"The average is "<<getAverage(arr)<<endl;
    findmax(arr);

}