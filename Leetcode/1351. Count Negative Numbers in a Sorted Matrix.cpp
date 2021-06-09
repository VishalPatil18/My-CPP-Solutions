// My Solution
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i=0; i<grid.size(); ++i){
            int low = 0, high = grid[i].size()-1;
            int mid;
            while(low <= high){
                mid = low + (high-low)/2;
                if(grid[i][mid] <= -1){
                    ans += (high-mid+1);
                    high = mid-1;
                }
                else if(grid[i][mid] > -1) low = mid+1;
            }
        }
        return ans;
    }
};
