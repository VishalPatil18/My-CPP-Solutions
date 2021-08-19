// My Solution - DP(Memoization)
class Solution {
public:
    int recur(int m, int n, vector<vector<int>> &t){
        int ans = 0;
        if(m == 1 && n == 1) return 1;
        if(t[m][n] == 0){
            if(m > 1) t[m][n] += recur(m-1, n, t);
            if(n > 1) t[m][n] += recur(m, n-1, t);    
        }
        return t[m][n];
    }
    
    int uniquePaths(int m, int n){
        vector<vector<int>> t(m+1, vector<int>(n+1, 0));
        
        return recur(m, n, t);
    }
};

// Without DP
public class Solution {
    public int uniquePaths(int m, int n) {
        if(m == 1 || n == 1) return 1;
        m--, n--;
        if(m < n) m = m + n, n = m - n, m = m - n;        // Swap, so that m is the bigger number
        long res = 1;
        int j = 1;
        for(int i = m+1; i <= m+n; i++, j++) res *= i, res /= j;       // Instead of taking factorial, keep on multiply & divide
            
        return (int)res;
    }
}