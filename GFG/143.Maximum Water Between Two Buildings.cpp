// My Solution
class Solution
{
    public:
    int maxWater(int height[], int n) 
    { 
        int low = 0, high = n-1, ans = 0;
        while(low < high){
            int ht = min(height[low], height[high]);
            ans = max(ans, ht * (high - low - 1));
            if(height[low] < height[high]) low++;
            else high--;
        }
        return ans;
    } 
};