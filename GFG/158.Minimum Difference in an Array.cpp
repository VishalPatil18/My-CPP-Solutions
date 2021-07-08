// My Solution
class Solution{
    public:
    int MinimumDifference(int arr[], int n)
    {
        int ans = INT_MAX;
        sort(arr, arr+n);
        for(int i=1; i<n; ++i){
            ans = min(ans, arr[i] - arr[i-1]);
        }
        return ans;
    }
};