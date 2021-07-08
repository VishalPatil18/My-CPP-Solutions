// My Solution
class Solution{
    public:
    int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr, arr+n);
        sort(dep, dep+n);
        int ans = 1;
        int i = 1, j = 0;
        while(i < n){
            if(arr[i] <= dep[j]) ans++;
            else j++;
            i++;
        }
        return ans;
    }
};
