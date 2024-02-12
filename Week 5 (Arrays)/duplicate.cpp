#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++) cin>>arr[i];

    int flag = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i!=j){
                if(arr[i]==arr[j]) flag = 1;
            }
        }
    }

    if(flag == 1) cout<<"The array contains duplicates";
    else cout<<"The array does not contains duplicates";
}