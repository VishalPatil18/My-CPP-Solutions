// My Solution - Using Swap Sort
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int> s;
        int i=0;
        while(i<nums.size()){
            if(nums[nums[i]-1] != nums[i]) swap(nums[i], nums[nums[i]-1]);
            else{
                if(nums[i]-1 != i) s.insert(nums[i]);
                i++;
            }
        }
        vector<int> ans;
        for(auto it = s.begin(); it != s.end(); it++){
            ans.push_back(*it);
        }
        return ans;
    }
};