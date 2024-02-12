#include<iostream>
#include<vector>
#include<algorithm>>
using namespace std;

void insertionSort(vector<float> &nums){
    int n = nums.size();
    for(int i = 1; i<n; i++){
        int j = i;
        while(j>=1 && nums[j]<nums[j-1]){
            swap(nums[j], nums[j-1]);
            j--;
        }
    }
}

void bucketSort( vector<float> &nums ){
    int n = nums.size();
    vector<vector<float>> v(n);

    for(auto ele : nums){
        int pos = ele * n;
        v[pos].push_back(ele);
    }

    for(int i=0; i<v.size(); i++){
        if(!v[i].empty())
            insertionSort(v[i]);
    }

    vector<float> ans;

    for(int i=0; i<n; i++){
        for(int j=0; j<v[i].size(); j++){
            ans.push_back(v[i][j]);
        }
    }

    nums = ans;
}

int main(){
    vector<float> nums = {0.12, 0.23, 0.56, 0.87, 0.67, 0.56, 0.35};

    bucketSort(nums);

    for(auto ele : nums)
        cout << ele << " ";

    cout << endl;
}

