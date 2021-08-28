class Solution{
  public:

    int sb(int arr[], int n, int x)
    {
        int l = 0, r = 0, ans = n+1, sum = 0;

        while(r < n){
            while(r < n && sum <= x) sum += arr[r++];
            
            while(l < n && sum > x) {
                ans = min(ans, r - l);
                sum -= arr[l++];
            }
        }
        if(ans == n+1) return 0;
        return ans; 
    }
};