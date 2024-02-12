//Find the first non-repeating element in the array 

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++)    cin>>arr[i];

    int check = 0;
    int num=-1;

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n; j++){
            if( j!=i && arr[i]==arr[j])  check = 1;
        }
        if(check == 0){
            num=arr[i];
            break;
        }
    }

    if(check==0)    cout<<"The first non-repeating element in the array is "<<num<<endl;
    else    cout<<"There are no non-repeating elements in the array"<<endl;
}