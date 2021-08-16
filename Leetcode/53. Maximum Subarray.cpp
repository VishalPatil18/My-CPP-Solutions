// My Solution
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int prefixSum = nums[0];
        
        for(int i=1; i<nums.size(); ++i) {
            prefixSum = max(nums[i], prefixSum+nums[i]);
            ans = max(ans, prefixSum); 
        }
        return ans;
    }
};

// Other Solution
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, subans = 0;
        
        for(int x : nums){
            if(subans <= 0) subans = x;
            else subans += x;
            ans = max(ans, subans);
        }
        
        return ans;
    }
};