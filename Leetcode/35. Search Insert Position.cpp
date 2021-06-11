// My Solution
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int mid;
        
        while(low <= high){
            mid = low + (high - low)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target){
                if(high == low) return mid;
                high = mid;
            }
            else if(nums[mid] < target){
                if(high == low) return mid+1;
                low = mid + 1;
            }
        }
        return 0;
    }
};

// Using STL
int searchInsert(vector<int>& nums, int target) {
    auto it=lower_bound(nums.begin(),nums.end(),target);
    return it-nums.begin();
}