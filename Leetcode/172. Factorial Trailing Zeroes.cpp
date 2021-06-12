// My 1 line O(1) Solution
class Solution {
public:
    int trailingZeroes(int n) {
        return n/5 + n/25 + n/125 + n/625 + n/3125; 
    }
};

// Other Solutions
class Solution {
    public:
    int trailingZeroes(int n){
        int sum = 0;
        while(n > 0){
            sum += n/5;
            n = n/5;
        }
        return sum;
    }
};
