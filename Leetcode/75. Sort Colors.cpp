// My Solution
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        while(mid <= high){
            if(nums[mid] == 0) swap(nums[mid++], nums[low++]);
            else if(nums[mid] == 1) swap(nums[mid++], nums[low]);
            else{
                swap(nums[mid], nums[high--]);
            }
        }
    }
};

// Other SOlutions
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        while(mid <= high){
            if(nums[mid] == 0) swap(nums[mid++], nums[low++]);
            else if(nums[mid] == 1) mid++;
            else{
                swap(nums[mid], nums[high--]);
            }
        }
    }
};