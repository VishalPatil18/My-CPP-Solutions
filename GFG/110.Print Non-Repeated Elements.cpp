class Solution{
  public:
    vector<int> printNonRepeated(int arr[],int n)
    {
        vector<int> ans;
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++) mp[arr[i]]++;
        
        for(int i=0; i<n; ++i) if(mp[arr[i]] == 1) ans.push_back(arr[i]);
        return ans;
    }
};
