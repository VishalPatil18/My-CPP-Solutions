// My Solution
class Solution {
public:
    void getsum(vector<int> &candidates, vector<vector<int>> &ans, vector<int> &subans, int target, int start){
        if(target == 0){
            ans.push_back(subans);
            return;
        }
        
        for(int i=start; i<candidates.size(); ++i){
            if(candidates[i] <= target){
                target -= candidates[i];
                subans.push_back(candidates[i]);
                getsum(candidates, ans, subans, target, i);
                target += candidates[i];
                subans.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        
        vector<vector<int>> ans;
        vector<int> subans;
        
        getsum(candidates, ans, subans, target, 0);
        
        return ans;
    }
};