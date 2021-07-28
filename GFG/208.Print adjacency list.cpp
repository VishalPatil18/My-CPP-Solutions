// My Solution - Brute Force
class Solution 
{
    public:
    vector<vector<int>> printGraph(int V, vector<int> adj[])
    {
        vector<vector<int>> ans;
        for(int i=0; i<V; ++i){
            vector<int> temp;
            temp.push_back(i);
            for(int x : adj[i]) temp.push_back(x);
            ans.push_back(temp);
        }
        return ans;
    }
};