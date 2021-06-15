class Solution
{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> stk;
        vector<long long> ans(n);
        for(long long i=n-1; i>=0; i--){
            while(!stk.empty() && arr[i] > stk.top()) stk.pop();
            ans[i] = stk.empty() ? -1 : stk.top();
            stk.push(arr[i]);
        }
        return ans;
    }
};