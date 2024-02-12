#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextGreaterElement(int arr[], int n) {
    stack<int> st;
    vector<int> ans(n);

    st.push(arr[n - 1]);

    for (int i = n - 2; i >= 0; i--) { // Fix the loop condition
        while (st.size() > 0 && arr[i] > st.top()) st.pop();
        if (st.size() == 0)
            ans[i] = -1;
        else
            ans[i] = st.top();
        st.push(arr[i]);
    }
    ans[n - 1] = -1;
    return ans;
}

int main() {
    int array[] = {3, 1, 2, 5, 4, 6, 2, 3};
    vector<int> ans = nextGreaterElement(array, 8);
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
}
