// My Solution
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> indegree(n+1, 0), outdegree(n+1, 0);
        for(auto x : trust) indegree[x[1]]++, outdegree[x[0]]++;
        for(int i=1; i<n+1; ++i) if(indegree[i] == n-1 && outdegree[i] == 0) return i;
        return -1;
    }
};