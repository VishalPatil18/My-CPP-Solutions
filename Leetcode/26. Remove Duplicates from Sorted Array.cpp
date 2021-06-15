class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        else if(nums.size() == 1) return 1;
        int x = nums.size();
        int prev = nums[0], index = 1;
        for(int i=1; i<nums.size(); ++i){
            if(nums[i] > prev){
                nums[index++] = nums[i];
                prev = nums[i];
            }
        }
        return index;
    }
};