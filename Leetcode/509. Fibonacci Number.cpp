// My Solution - DP(Memoization)
class Solution {
public:
    int fibRecursive(int n, vector<int> &t){
        if(n == 0 || n == 1) return n;
        if(t[n] != -1) return t[n];
        
        return t[n] = fibRecursive(n-1, t) + fibRecursive(n-2, t);
    }
    
    int fib(int n){
        vector<int> t(n+1, -1);
        return fibRecursive(n, t);
    }
};

// My Solution - Recursive
class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1) return n;
        return fib(n-1) + fib(n-2);
    }
};