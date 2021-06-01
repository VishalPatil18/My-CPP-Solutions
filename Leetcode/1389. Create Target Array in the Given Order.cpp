class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        vector<int> targetArray(nums.size(), -1);
        for(int i=0; i<nums.size(); ++i){
            if(index[i] >= i) targetArray[index[i]] = nums[i];
            else{
                for(int j=nums.size()-1; j>index[i]; --j){
                    targetArray[j] = targetArray[j-1];
                }
                targetArray[index[i]] = nums[i];
            }
        }
        return targetArray;        
    }
};