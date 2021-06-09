// My Solution
class Solution {
public:
    int largestPerimeter(vector<int>& nums){
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; ++i){
            if(nums[i] + nums[i+1] > nums[i+2])
                ans = max(ans, (nums[i]+nums[i+1]+nums[i+2]));
        }
        return ans;
    }
};

// Optimized Solution
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(begin(nums), end(nums)); 
        for (int i = size(nums)-1; i >= 2; --i) 
            if (nums[i-2] + nums[i-1] > nums[i]) 
                return nums[i-2] + nums[i-1] + nums[i]; 
        return 0; 
    }
};