// My Solution
class Solution
{
    public:
    string removeConsecutiveDuplicates(string s)
    {
        string ans;
        stack<char> stk;
        stk.push(s[0]); ans.push_back(s[0]);
        
        for(int i=1; i<s.length(); ++i){
            if(stk.top() != s[i]){ ans.push_back(s[i]); stk.push(s[i]); }
        }
        return ans;
    }
};