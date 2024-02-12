// Isme ek array of integers diya hai apun ko ek array return karne hai jo ye bateyaga ki inn mein se inki ranking kya hai in terms of size
// eg: Input : [14, 7, 25] = [1, 0, 2]
#include<vector>
#include<iostream>
#include<climits>
using namespace std;

vector<int> order(vector<int> nums){
    vector<int> ans(nums.size());
    for(int i=0; i<nums.size(); i++){
        int minIdx = i;
        for( int j=0; j<nums.size(); j++){
            if(nums[j] != INT_MAX && nums[j] < nums[minIdx])     minIdx = j;
        }
        ans[minIdx] = i;
        nums[minIdx] = INT_MAX;
    }

    return ans;
}

int main(){
    vector<int> v = {14, 7, 25};

    v = order(v);

    for(int i=0; i<v.size(); i++)   cout<<v[i]<<" ";
}