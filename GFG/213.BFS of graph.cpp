// My Solution
class Solution
{
    public:
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> ans;
        bool visited[V] = {false};
        
        queue<int> q;
        visited[0] = true;
        q.push(0);
        while(!q.empty()){
            int u = q.front();
            q.pop();
            
            ans.push_back(u);
            
            for(auto x : adj[u])
                if(!visited[x]){
                    q.push(x);
                    visited[x] = true;
                }
        }
        
        return ans;
    }
};