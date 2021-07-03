// My Solution
class Solution{
    public:
    int minAdjDiff(int arr[], int n){    
        int ans = INT_MAX;
        for(int i=0; i<n-1; ++i) ans = min(ans, abs(arr[i] - arr[i+1]));
        ans = min(ans, abs(arr[n-1] - arr[0]));
        return ans;
    }
};