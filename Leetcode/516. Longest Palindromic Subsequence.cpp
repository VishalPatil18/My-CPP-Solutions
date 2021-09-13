// My Solution - Recursive(TLE)
class Solution {
public:
    int lcs(string &s, string &rev, int i, int j){
        int ans = 0;
        if(i == 0 || j == 0) return ans;
        
        if(s[i-1] == rev[j-1]){
            ans = 1 + lcs(s, rev, i-1, j-1);
        } else{
            ans = max(lcs(s, rev, i-1, j), lcs(s, rev, i, j-1));
        }
        return ans;
    }
    
    int longestPalindromeSubseq(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        
        return lcs(s, rev, s.length(), rev.length());
    }
};

// My Solution - Memoized
class Solution {
public:
    int lcs(string &s, string &rev, int i, int j, vector<vector<int>> &t){
        if(i == 0 || j == 0) return 0;
        if(t[i][j] != -1) return t[i][j];
        
        if(s[i-1] == rev[j-1])
            return t[i][j] = 1 + lcs(s, rev, i-1, j-1, t);
        
        return t[i][j] = max(lcs(s, rev, i-1, j, t), lcs(s, rev, i, j-1, t));
    }
    
    int longestPalindromeSubseq(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        vector<vector<int>> t(s.length()+1, vector<int> (s.length()+1, -1));
        
        return lcs(s, rev, s.length(), rev.length(), t);
    }
};