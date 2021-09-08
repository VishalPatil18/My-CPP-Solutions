// My Solution
class Solution {
public:
    void solve(vector<string> &ans, string s, int open, int close){
        if(open == 0 && close == 0){
            ans.push_back(s);
            return;
        }
        
        string op1 = s;
        if(open > 0){
            op1.push_back('(');
            solve(ans, op1, open-1, close);
        }
        
        if(open < close || open == 0){
            string op2 = s;
            op2.push_back(')');
            solve(ans, op2, open, close-1);
        }
        return;
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        solve(ans, s, n, n);
        return ans;
    }
};