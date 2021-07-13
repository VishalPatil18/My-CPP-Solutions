// My Solution
class Solution{
    public:
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        vector<int> ans;
        map<int, int> mp;
        
        for(int i=0; i<N; ++i) mp[A1[i]]++;
        
        for(int i=0; i<M; ++i){
            int x = mp.find(A2[i]) -> second;
            for(int j=0; j<x; ++j) ans.push_back(A2[i]);
            mp.erase(A2[i]);
        }
        for(auto x : mp)
            for(int j=0; j<x.second; ++j) ans.push_back(x.first);
        
        return ans;
    } 
};