// My Solution
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n){
            n = n & (n-1);
            ans++;
        }
        return ans;
    }
};

// Using Inbuilt Function
class Solution {
public:
    int hammingWeight(uint32_t n) {
        return bitset<32>(n).count();
    }
};