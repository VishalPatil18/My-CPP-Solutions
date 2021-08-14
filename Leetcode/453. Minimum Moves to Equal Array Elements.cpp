 // My Solution - Brute Force
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0, x;
        bool flag = true;
        while(flag){
            sort(nums.begin(), nums.end());
            x = nums[nums.size()-1] - nums[0];
            ans += x;
            for(int i=0; i<nums.size()-1; ++i) nums[i] += x;
            int i;
            for(i=1; i<nums.size(); ++i) if(nums[i] != nums[i-1]) break;
            if(i == nums.size()) flag = false;
            else flag = true;
        }
        return ans;
    }
};

// Other Solutions
class Solution {
public:
    int minMoves(vector<int>& nums){
        int n = nums.size();
        if(n <= 1) return 0;
        int mn = nums[0];
        long sum = nums[0];
        for(int i=1; i<n; ++i){
            mn = min(mn, nums[i]);
            sum += nums[i];
        }
        return sum - long(mn) * long(n);
    }
};
