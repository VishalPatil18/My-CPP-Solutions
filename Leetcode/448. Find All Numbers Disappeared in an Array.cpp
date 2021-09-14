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

// Inplace Solutions
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0; i<nums.size(); ++i) if(nums[abs(nums[i]) - 1] > 0) nums[abs(nums[i]) - 1] *= -1;
        for(int i=0; i<nums.size(); ++i) if(nums[i] > 0) ans.push_back(i+1);
        
        return ans;
    }
};

// Using Swap Sort
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int i=0;
        while(i<nums.size()){
            if(nums[nums[i]-1] != nums[i]) swap(nums[i], nums[nums[i]-1]);
            else i++;
        }
        for(int j=0; j<nums.size(); ++j){
            if(nums[j] != j+1) ans.push_back(j+1);
        }
        return ans;
    }
};