//Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)  cin>>arr[i];

    int uNum=-1;
    for(int i=0; i<n; i++){
        bool flag = 0;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                flag=1;
            }
        }
        if(!flag){
            uNum=arr[i];
            break;
        }   
    }

    cout<<"The unique number of the array is "<<uNum<<endl;
}