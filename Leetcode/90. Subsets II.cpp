// My Solution
class Solution {
public:
    void subSet(vector<int> &nums, set<vector<int>> &s, vector<int> subans, int start){
        if(start == nums.size()){
            s.insert(subans);
            return;
        }
        
        subSet(nums, s, subans, start+1);
        subans.push_back(nums[start]);
        subSet(nums, s, subans, start+1);
        subans.pop_back();
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<int> subans;
        
        subSet(nums, s, subans, 0);
        
        vector<vector<int>> ans;
        for(auto x : s) ans.push_back(x);
        return ans;
    }
};