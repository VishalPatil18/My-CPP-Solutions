// My Solution
class Solution{
public: 
    void solve(int n, vector<string> &ans, string s, int ones, int zeroes){
        if(n == 0){
            ans.push_back(s);
            return;
        }
        
        string op1 = s + "1";
        solve(n-1, ans, op1, ones+1, zeroes);
        
        if(ones > zeroes){
            string op2 = s + "0";
            solve(n-1, ans, op2, ones, zeroes+1);
        }
        return;
    }
    
    vector<string> NBitBinary(int N)
    {
        vector<string> ans;
        string s = "1";
        solve(N-1, ans, s, 1, 0);
        return ans;
    }
};