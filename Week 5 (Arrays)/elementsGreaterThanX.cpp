#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++)    cin>>arr[i];

    int x;
    cout<<"Enter the number x: ";
    cin>>x;

    int num = 0;

    for(int i = 0; i<n; i++){
        if (arr[i]>x) num++;
    }

   cout<<"The number of elements greater than x is "<<num<<endl;
   
            
}
       


