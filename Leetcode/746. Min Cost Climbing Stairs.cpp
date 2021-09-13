// My Solution - Recurrsive O(2^N) TLE
class Solution {
public:
    int solve(vector<int> &cost, int n){
        if(n < 0) return 0;
        if(n == 0 || n == 1) return cost[n];
        return cost[n] + min(solve(cost, n-1), solve(cost, n-2));
    }
    
    int minCostClimbingStairs(vector<int>& cost){
        int n = cost.size();
        return min(solve(cost, n-1), solve(cost, n-2));
    }
};

// My Solution - Memoized Version
class Solution {
public:
    int solve(vector<int> &cost, int n, vector<int> &t){
        if(n < 0) return 0;
        if(n == 0 || n == 1) return cost[n];
        if(t[n] != -1) return t[n];
        
        int op1, op2;
        if(t[n-1] != -1) op1 = t[n-1];
        else{
            op1 = solve(cost, n-1, t);   
            t[n-1] = op1;
        }
        
        if(t[n-2] != -1) op2 = t[n-2];
        else{
            op2 = solve(cost, n-2, t);   
            t[n-2] = op2;
        }
        
        return t[n] = cost[n] + min(op1, op2);
    }
    
    int minCostClimbingStairs(vector<int>& cost){
        int n = cost.size();
        vector<int> t(n+1, -1);
        t[0] = cost[0], t[1] = cost[1];
        return min(solve(cost, n-1, t), solve(cost, n-2, t));
    }
};