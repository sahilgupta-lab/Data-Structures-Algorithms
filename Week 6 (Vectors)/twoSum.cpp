#include <iostream>
using namespace std;

int main(){

    //Input Array
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++) cin>>arr[i];

    //Input number
    int x;
    cout<<"Enter the number: ";
    cin>>x;

    cout<<"The doublets in the array whose sum is equal to "<<x<<" is/are: ";

    //Check & print
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if (arr[i] + arr[j] == x){
                cout<<"("<<arr[i]<<","<<arr[j]<<") ";
            }
        }
    }




    return 0;
}