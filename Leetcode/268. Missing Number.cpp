// My Solution
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] != i) return i;
        }
        return nums.size();
    }
};

// Using Bit Manipulation
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = nums.size();
        int i = 0;
        
        for(int num : nums){
            result ^= num;
            result ^= i;
            i++;
        }
        
        return result;
    }
};

// By summing all elements
class Solution {
    public:
    int missingNumber(int nums[], int n) {
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += i;
            sum -= nums[i];
        }
        sum += n;
        return sum;
    }
}