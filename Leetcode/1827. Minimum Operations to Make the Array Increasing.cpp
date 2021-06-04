// My Solution - O(n)
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        if(nums.size() <= 1) return ans;
        for(int i=1; i<nums.size(); ++i){
            int diff = nums[i] - nums[i-1];
            if(diff <= 0){
                ans += abs(diff) + 1;
                nums[i] += abs(diff) + 1;   
            }
        }
        return ans;
    }
};
