// My Solution - DP(top-down or tabular)
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        if(nums.size() == 1) return abs(nums[0]) == abs(target) ? 1 : 0;
        
        int n = nums.size(), sum = 0;
        for(int x : nums) sum += x;
        int m = (sum + target)/2;
        
        if(sum < target || (sum + target) % 2 != 0) return 0;
        
        int t[n + 1][m + 1];
        
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                t[i][j] = 0;
                if(j == 0) t[i][j] = 1;
            }
        }
        
        for(int i=1; i<=n; ++i)
            for(int j=0; j<=m; ++j){
                if(nums[i-1] <= j) t[i][j] = t[i-1][j] + t[i-1][j-nums[i-1]];
                else t[i][j] = t[i-1][j];
            }
        
        return t[n][m];
    }
};