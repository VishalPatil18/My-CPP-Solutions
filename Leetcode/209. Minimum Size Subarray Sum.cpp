// My Solution
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0, ans = nums.size()+1, sum = 0;

        while(r < nums.size()){
            while(r < nums.size() && sum < target) sum += nums[r++];
            
            while(l < nums.size() && sum >= target) {
                ans = min(ans, r - l);
                sum -= nums[l++];
            }
        }
        if(ans == nums.size()+1) return 0;
        return ans;
    }
};