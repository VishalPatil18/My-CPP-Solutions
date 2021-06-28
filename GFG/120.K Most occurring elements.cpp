class Solution
{
    public:
    int kMostFrequent(int arr[], int n, int k) 
    { 
        unordered_map<int, int> mp;
        priority_queue<int> pq;
        
        for(int i=0; i<n; ++i) mp[arr[i]]++;
        
        for(auto x : mp) pq.push(x.second);
        
        int ans = 0;
        while(k--){
            ans += pq.top();
            pq.pop();
        }
        
        return ans;
    } 
};