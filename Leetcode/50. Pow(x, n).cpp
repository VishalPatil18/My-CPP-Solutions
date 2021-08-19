// My Solution
class Solution {
public:
    double myPow(double x, int n){
        if(n == 0) return 1;
        if(n < 0) n *= -1, x = 1/x;
        
        return x * myPow(x, n-1);
    }
};

// Other Solution - 1
class Solution {
public:
    double myPow(double x, int n){
        if(n == 0) return 1;
        if(n < 0) n = -n, x = 1/x;
        
        return (n%2) ? x * myPow(x * x, n/2) : myPow(x * x, n/2);
    }
};

// Other Solution - 2
class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        while (n) {
            if (n % 2) res = n > 0 ? res * x : res / x;
            x = x * x;
            n /= 2;
        }
        return res;
    }
};