/*
	https://leetcode.com/problems/maximum-subarray/
*/

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