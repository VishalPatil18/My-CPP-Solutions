// My Solution
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return (nums[n-1]*nums[n-2] - nums[0]*nums[1]);
    }
};

// Other Solutions
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        //we have to return the result of (firstMax*secondMax) - (firstMin*secondMin)
        int max1 = INT_MIN, max2 = INT_MIN, min1 = INT_MAX, min2 = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>max1) {
                max2 = max1;                                // assign the second max to max2
                max1 = nums[i];
            }
            else if(nums[i] > max2) max2 = nums[i];         // it can become second max
            
            if(nums[i] < min1) {                            // check for the minimum
                min2 = min1;                                // it can become first minimum
                min1 = nums[i];
            }
            else if(nums[i] < min2) min2 = nums[i];         // it can become second minimum
        }
        
        return (max1*max2) - (min1*min2);
    }
};

