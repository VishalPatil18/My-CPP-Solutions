// My Solution
class Solution 
{
    public:
    void dfs(vector<int> adj[], int s, int V, vector<int> &ans, int visited[]){
        ans.push_back(s);
        visited[s] = true;
        
        for(int x : adj[s]){
            if(!visited[x]){
                visited[x] = true;
                dfs(adj, x, V, ans, visited);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> ans;
        int visited[V] = {false};
        
        for(int i=0; i<V; ++i){
            if(!visited[i]){
                visited[i] = true;
                dfs(adj, i, V, ans, visited);
            }
        }
        return ans;
    }
};