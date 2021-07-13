// My Solution
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        int preSum = 0;
        unordered_map<int, int> hash;
        for(int i=0; i<nums.size(); ++i){
            preSum += nums[i];
            if(preSum == k) ans++;
            if(hash.find(preSum - k) != hash.end()) ans += hash.find(preSum - k) -> second;
            hash[preSum]++;
        }
        return ans;    
    }
};