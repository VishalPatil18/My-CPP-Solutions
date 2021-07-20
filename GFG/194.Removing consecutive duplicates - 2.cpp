// My Solution
class Solution
{
    public:
    string removePair(string str)
    {
        stack<char> stk;
        stk.push(str[0]);
        for(int i=1; i<str.length(); ++i){
            if(!stk.empty() && str[i] == stk.top()) stk.pop();
            else stk.push(str[i]);
        }
        string ans;
        while(!stk.empty()){
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};