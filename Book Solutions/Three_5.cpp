#include<iostream>
using namespace std;

int main(){

    int n, count1=0, count2=0, count3=0, count4=0, count5=0, countSB=0;
    cout<<"Enter the number of voters: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the votes of each candidate: ";
    for(int i = 0; i<n; i++) cin>>arr[i];

    for(int i = 0; i<n; i++){
        if(arr[i]==1) count1++;
        else if(arr[i]==2) count2++;
        else if(arr[i]==3) count3++;
        else if(arr[i]==4) count4++;
        else if(arr[i]==5) count5++;
        else countSB++;
    }

    cout<<"The number of votes for candidate 1 is "<<count1<<endl;
    cout<<"The number of votes for candidate 2 is "<<count2<<endl;
    cout<<"The number of votes for candidate 3 is "<<count3<<endl;
    cout<<"The number of votes for candidate 4 is "<<count4<<endl;
    cout<<"The number of votes for candidate 5 is "<<count5<<endl;
    cout<<"The number of spoilt ballots is "<<countSB<<endl;
}