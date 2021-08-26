// My SOlution -  O(N) using Bit Manipulations
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xorr = nums[0];
        for(int i=1; i<nums.size(); ++i) xorr ^= nums[i];
        return xorr;
    }
};

// Using Binary Search - O(logn)
int singleNonDuplicate(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while(left < right){
        int mid = (left + right)/2;
        if((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1]))
            left = mid + 1;
        else
            right = mid;
    }
    return nums[left];
}