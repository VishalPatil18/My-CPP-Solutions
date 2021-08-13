// My Solution
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id){
        int ans = 0;
        unordered_map<int, Employee*> mp;
        for(auto x: employees) mp[x->id] = x;
        
        queue<Employee*> q;
        q.push(mp[id]);
        
        while(!q.empty()){
            auto curr = q.front(); 
            q.pop();
            ans += curr->importance;
            for(auto x : curr->subordinates) q.push(mp[x]);
        }
        return ans;
    }
};

// Other Solution Using DFS
class Solution {
public:
    int totalImportance = 0;
    unordered_map<int, Employee*> map;
    
    void checkEmployee(int id) {
        totalImportance += map[id]->importance;
        
        for(int x: map[id]->subordinates) {
            checkEmployee(x);
        }
    }
    
    int getImportance(vector<Employee*> employees, int id) {
        for(auto x: employees){
            map[x->id] = x;
        }
        
        checkEmployee(id);
        return totalImportance;
    }
};