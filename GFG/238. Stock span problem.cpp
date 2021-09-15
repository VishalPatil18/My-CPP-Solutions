// My Solution - Using Stack
class Solution
{
    public:
    vector<int> calculateSpan(int price[], int n)
    {
        vector<int> ans;
        stack<pair<int, int>> stk;
        for(int i=0; i<n; ++i){
            if(stk.empty()) ans.push_back(-1);
            else if(stk.top().second > price[i]) ans.push_back(stk.top().first);
            else{
                while(!stk.empty() && stk.top().second <= price[i]) stk.pop();
                if(stk.empty()) ans.push_back(-1);
                else ans.push_back(stk.top().first);
            }
            stk.push({i, price[i]});
        }
        for(int i=0; i<ans.size(); ++i) ans[i] = i - ans[i];
        return ans;
    }
};