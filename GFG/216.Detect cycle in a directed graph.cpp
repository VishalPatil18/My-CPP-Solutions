// My Solution
class Solution
{
    public:
    bool dfsCycle(int s, int V, vector<int> adj[], bool visited[], bool rcs[])
    {
        visited[s] = true;
        rcs[s] = true;
        for(auto x : adj[s]){ 
            if(!visited[x] && dfsCycle(x, V, adj, visited, rcs)) return true;
            else if(rcs[x]) return true;
        }
        rcs[s] = false;
        
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) 
    {
        bool visited[V] = {false}, rcs[V] = {false};
        
        for(int i=0; i<V; i++)
            if(!visited[i]) if(dfsCycle(i, V, adj, visited, rcs)) return true;
        
        return false;    
    }
};