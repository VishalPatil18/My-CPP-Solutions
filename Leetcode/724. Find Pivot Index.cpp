// My Solution
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int x : nums) sum += x;
        
        int currsum = 0;
        for(int i=0; i<nums.size(); ++i){
            if(sum - nums[i] - currsum == currsum) return i;
            currsum += nums[i];
        }
        return -1;
    }
};