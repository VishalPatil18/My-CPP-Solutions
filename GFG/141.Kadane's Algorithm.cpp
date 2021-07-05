// My Solution
class Solution{
    public:
    int maxSubarraySum(int arr[], int n){
        int ans = arr[0], subans = arr[0];
        for(int i=1; i<n; ++i){
            subans = max(arr[i], subans + arr[i]);
            ans = max(ans, subans);
        }
        return ans;
    }
};