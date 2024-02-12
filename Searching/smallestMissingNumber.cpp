//Hume ek array of sorted numbers diye hue hai, hume btana hai ki isme se smallest missing no konsa hai

#include<iostream>
using namespace std;

int mnLS(int arr[], int n){
    for(int i=0; i<n; i++){
        if(i != arr[i])  return i;
    }
    return -1;
}

int mnBS(int arr[], int n){
    int low = 0, high = n-1, ans = -1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==mid)   low=mid+1;
        else{
            ans = mid;
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {0,1,2,4,5,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<mnBS(arr,n);
}