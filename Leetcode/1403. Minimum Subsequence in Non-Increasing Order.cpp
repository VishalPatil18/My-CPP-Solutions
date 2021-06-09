class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> ans;
        int sum_total = 0, sum_subseq = 0;
        for(int x : nums) sum_total += x;
        
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i=0; i<nums.size(); ++i){
            if(sum_subseq <= sum_total - sum_subseq){
                ans.push_back(nums[i]);
                sum_subseq += nums[i];
            }
        }
        return ans;
    }
};