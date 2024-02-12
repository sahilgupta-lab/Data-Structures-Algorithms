#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void countingSort(vector<int> &nums){
    int mx = *max_element(nums.begin(), nums.end());
    vector<int> freq(mx+1,0);

    for(auto ele : nums)
        freq[ele]++;

    for(int i=1; i<freq.size(); i++)
        freq[i] += freq[i-1];

    vector<int> res(nums.size());

    for(int i=nums.size()-1; i>=0; i--){
        res[--freq[nums[i]]] = nums[i];
    }

    nums = res;
    res.clear();
    freq.clear();
}

int main(){
    vector<int> nums = {2,3,4,1,5,6,2,3,1,5};
    countingSort(nums);

    for(auto ele : nums)
        cout<< ele <<" ";

    cout << endl;
}