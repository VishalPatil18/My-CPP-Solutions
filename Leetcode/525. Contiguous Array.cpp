// My Solution
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans = 0;
        for(int &x:nums) if(x == 0) x = -1;
        
        int preSum = 0;
        unordered_map<int, int> hash;
        for(int i=0; i<nums.size(); ++i){
            preSum += nums[i];
            if(preSum == 0) ans = max(ans, i+1);
            if(hash.find(preSum) != hash.end()) ans = max(ans, i - hash[preSum]);
            hash.insert({preSum, i});
        }
        return ans;
    }
};