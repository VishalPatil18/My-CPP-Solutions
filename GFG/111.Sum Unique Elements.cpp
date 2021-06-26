class Solution{
  public:
    long unique_elements(vector<long>nums)
    {
        long ans = 0;
        unordered_map<long, long> mp;
        
        for(int i=0; i<nums.size(); ++i) mp[nums[i]]++;
        
        for(int i=0; i<nums.size(); ++i) if(mp[nums[i]] == 1) ans += nums[i];
        return ans;
    }
};