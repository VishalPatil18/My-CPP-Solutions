// My Solution - Time O(nlogn)  &&  Space - O(1)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int &x : nums) x *= x;
        sort(nums.begin(), nums.end());
        return nums;
    }
};

// Optimized Solution
