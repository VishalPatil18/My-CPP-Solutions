class Solution
{
    public:
    pair<int, int> findRepeating(int *arr, int n){
        unordered_map<int, int>mp;
        for(int i=0; i<n; i++) mp[arr[i]]++;
        
        for(auto x : mp) if(x.second > 1) return x;
    }
};