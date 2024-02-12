// #include<vector>
// #include<iostream>
// using namespace std;

// int getMax(vector<int> nums){
//     int mx = nums[0];

//     for(int i=1; i<nums.size(); i++)
//         mx = max(mx, nums[i]);

//     return mx;
// }

// void radixSort(vector<int> &nums){
//     int mx = getMax(nums);

//     for(int pos=1; mx/pos>0; pos*=10){
//         radixCountingSort(nums);
//     }
// }

// void radixCountingSort(vector<int> &nums){
//     vector<int> freq(10, 0);

//     //frequency
//     for(int i=0; i<nums.size(); i++)
//         freq[nums[i]%10]++;

//     //cumulative frequency
//     for(int i=1; i<freq.size(); i++)
//         freq[i] += freq[i-1];

//     vector<int> res(nums.size());

//     for(int i=nums.size()-1; i>=0; i--)
//         res[--freq[nums[i]]] = nums[i];

//     nums = res;
//     res.clear();
//     freq.clear();
// }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void radixCountingSort(vector<int> &nums, int pos){
    vector<int> freq(10, 0);

    for( auto ele : nums ){
        freq[(ele/pos) % 10]++;
    }

    for(int i=1; i<freq.size(); i++)
        freq[i] += freq[i-1];

    vector<int> res(nums.size());

    for( int i=nums.size()-1; i>=0; i-- ){
        res[--freq[(nums[i]/pos) % 10]] = nums[i];
    }

    nums = res;
}

void radixSort(vector<int> &nums){
    int mx = *max_element(nums.begin(), nums.end());

    for(int position = 1; mx/position > 0; position*=10){
        radixCountingSort(nums, position);
    }    
}



int main(){
    vector<int> nums = {35, 123, 38, 99};
    radixSort(nums);

    for(auto ele : nums)
        cout << ele << " ";

    cout << endl;
}

