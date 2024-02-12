#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void previousGreaterElement(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n);
    stack<int> st;

    st.push(nums[0]);
    ans[0] = -1;

    for(int i=1; i<n; i++){
        while(st.size()>0 && nums[i]>st.top())  st.pop();
        if(st.size()==0)    ans[i] = -1;
        else    ans[i] = st.top();
        st.push(nums[i]);
    }

    for(int i=0; i<ans.size(); i++)    cout<<ans[i]<<" ";
    cout<<endl;
}

int main(){
    vector<int> nums = {7, 8, 3, 9, 1, 8, 0 , 3};
    previousGreaterElement(nums);
}
