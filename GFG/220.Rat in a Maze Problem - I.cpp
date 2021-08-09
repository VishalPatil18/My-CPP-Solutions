// My Solution
class Solution{
    public:
    void find(vector<vector<int>> &m, int n, string s, vector<string> &ans, int i, int j){
        if(i == n-1 && j == n-1){
            ans.push_back(s);
            return;
        }
        
        if(i>=0 && j>=0 && i<n && j<n && m[i][j]){
            m[i][j] = 0;
            find(m, n, s+"D", ans, i+1, j);
            find(m, n, s+"L", ans, i, j-1);
            find(m, n, s+"R", ans, i, j+1);
            find(m, n, s+"U", ans, i-1, j);
            m[i][j] = 1;
        }
        return;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0] == 0 || m[n-1][n-1] == 0) return ans;
        
        string s;
        find(m, n, s, ans, 0, 0);
        return ans;
    }
};