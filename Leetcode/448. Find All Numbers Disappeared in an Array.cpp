// My Solution
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> hash(nums.size()+1, 0);
        vector<int> ans;
        for(int x : nums) hash[x]++;
        
        for(int i=1; i<hash.size(); ++i) if(hash[i] == 0) ans.push_back(i);
        
        return ans;
    }
};

// Other Solutions

