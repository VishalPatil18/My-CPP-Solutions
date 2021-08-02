// My Solution
class Solution 
{
    public:
    bool dfs(vector<int> adj[], int s, bool visited[], int parent){
        visited[s] = true;
        for(int x : adj[s]){
            if(!visited[x]) if(dfs(adj, x, visited, s)) return true;
            else if(x != parent || x == s) return true;
        }
        return false;
    }
    
    bool isCycle(int V, vector<int>adj[])
    {
        bool visited[V] = {false};
        
        for(int i=0; i<V; ++i){
            if(!visited[i]) if(dfs(adj, i, visited, -1)) return true;
        }
        return false;
    }
};

// Other Solution - using BFS
class Solution 
{
    public:
    bool isCycle(int V, vector<int>adj[])
    {
        bool visited[V] = {false};
        queue<int> q;
        for(int i=0; i<V; i++){
            if(!visited[i]){
                visited[i] = true;
                q.push(i);
                while(!q.empty()){
                    int count = 0;
                    int node = q.front();
                    q.pop();
                    for(auto it = adj[node].begin(); it != adj[node].end(); it++){
                        if(visited[*it]){
                            count++;
                        }
                        else{
                            visited[*it]=true;
                            q.push(*it);
                        }
                    }
                    if(count>1) return true;
                }
            }
        }
        return false;
    }
};