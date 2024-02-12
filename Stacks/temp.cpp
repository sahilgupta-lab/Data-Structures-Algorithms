#include<iostream>
#include<vector>
#include<stack>
using namespace std;


    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> nge(n);
        nge[n-1] = n;
        stack<int> st;
        st.push(n-1);
        vector<int> ans;

        for(int i = n-2; i>=0; i--){
            while(st.size()>0 && nums[i]>=nums[st.top()])   st.pop();
            if(st.size()==0)    nge[i] = n;
            else    nge[i] = st.top();
            st.push(i);
        }

        int j;
        for (int i = 0; i <= n - k; i++) {
            j = i;
            while (j < i + k) {
                j = nge[j];
            }
            ans.push_back(nums[j]);
        }
   
        return ans;
    }

int main(){

    vector<int> nums = {1,3,-1,-3,5,3,6,7};

    vector<int> ans = maxSlidingWindow(nums, 3);

    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
    cout<<endl;
}
