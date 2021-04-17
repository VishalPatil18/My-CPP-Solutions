/*
	https://leetcode.com/problems/product-of-array-except-self/
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1;
        for(int x: nums) mul *= x;
        
        vector<int> ans;
        
        if(mul == 0) {
            vector<int> ans1(nums.size(), 0);
            mul = 1;
            for(int x: nums) {
                if(x != 0) mul *= x;
            }
            int count_0 = 0;
            for(int x: nums) {
                if(x == 0) count_0++;
            }
            if(count_0 <= 1) {
                for(int i=0; i<nums.size(); ++i){
                    if(nums[i] == 0) ans1[i] = mul;
                }    
            }
            return ans1;
        }
        for(int i=0; i<nums.size(); ++i) {
            ans.push_back(mul/nums[i]);
        }
        return ans;
    }
};