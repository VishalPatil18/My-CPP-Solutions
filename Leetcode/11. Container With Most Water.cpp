class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int low = 0, high = height.size()-1;
        while(low < high){
            ans = max(ans, (high - low)*(min(height[low], height[high])));
            if(height[low] < height[high]) low++;
            else high--;
        }
        return ans;
    }
};