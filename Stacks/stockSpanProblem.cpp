#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void stockSpan(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n);
    stack<int> st;

    st.push(0);
    ans[0] = 1;
    for(int i=1; i<n; i++){
        while(st.size()>0 && nums[i]>nums[st.top()]){
            st.pop();
        }
        if(st.size()==0)    ans[i] = -1;  
        else    ans[i] = st.top();
        ans[i] = i - ans[i];
        st.push(i);
    }




    for(int i=1; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }    
    cout<<endl;
}

int main(){
    vector<int> nums = {100, 80, 60, 81, 70, 60, 75, 120};
    stockSpan(nums);
}
