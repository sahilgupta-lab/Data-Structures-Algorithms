#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of students of the class: ";
    cin>>n;

    int arr[n][2];

    cout<<"Enter the roll number of the students: ";
    for(int i = 0; i<n; i++)    cin>>arr[i][0];

    cout<<"Enter the marks of the students: ";
    for(int i = 0; i<n; i++)    cin>>arr[i][1];

    cout<<"The roll number and marks of the students are: \n";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}