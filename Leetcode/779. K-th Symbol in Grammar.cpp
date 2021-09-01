// My Solution - Recursive
class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n == 1 || k == 1) return 0;
        
        int x = pow(2, n-1)/2;
        if(k > x) return !kthGrammar(n-1, k-x);
        return kthGrammar(n-1, k);
    }
};