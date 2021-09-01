// My Solution - DP(Memoization)
class Solution {
public:
    int climbRec(int n, vector<int> &t){
        if(n == 0 || n == 1) return 1;
        
        if(t[n] != -1) return t[n];
        
        return t[n] = (climbRec(n-1, t)) + (climbRec(n-2, t));
    }
    
    int climbStairs(int n){
        vector<int> t(n+1, -1);
        return climbRec(n, t);
    }
};

// My Solution - Recursive (TLE)
class Solution {
public:
    int climbStairs(int n){
        if(n == 0 || n == 1) return 1;
        
        return (climbStairs(n-1)) + (climbStairs(n-2));
    }
};