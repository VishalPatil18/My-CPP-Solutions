// My Solution
int maxLen(int A[], int n)
{
    int ans = 0, sum = 0;
    unordered_map<int, int> mp;
    
    for(int i=0; i<n; i++){
        sum += A[i];
        if(sum == 0) ans = i + 1;
        if(mp.find(sum) != mp.end()) ans = max(ans, i - mp[sum]);
        if(mp.find(sum) == mp.end()) mp[sum] = i;
    }
    
    return ans;
}