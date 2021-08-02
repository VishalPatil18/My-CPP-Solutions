// My Solution
class Solution
{
    public:
    //Function to return list containing vertices in Topological order. 
    vector<int> topoSort(int V, vector<int> adj[]) 
    {
        vector<int> ans;
        vector<int> indegree(V, 0);
        for(int i=0; i<V; ++i) for(int x : adj[i]) indegree[x]++;
        
        queue<int> q;
        for(int x : indegree) if(x == 0) q.push(x);
        
        while(!q.empty()){
            int u = q.front();
            q.pop();
            
            ans.push_back(u);
            for(int x : adj[u]){
                indegree[x]--;
                if(indegree[x] == 0) q.push(x);
            }
        }
        return ans;
    }
};