// My Solution - Using Sort
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k){
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
};

// 