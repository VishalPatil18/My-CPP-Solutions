// My Solution
class Solution
{   
    public:
    \vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        vector<int> ans;
        if(n == 1 and n <= m) return matrix[0];
        if(m == 1 and n > m){
            for(int i=0; i<n; i++) ans.push_back(matrix[i][0]);
            return ans;
        }
        
        for(int j=0; j<m; ++j) ans.push_back(matrix[0][j]);
        for(int i=1; i<n; ++i) ans.push_back(matrix[i][m-1]);
        for(int j=m-2; j>=0; --j) ans.push_back(matrix[n-1][j]);
        for(int i=n-2; i>=1; --i) ans.push_back(matrix[i][0]);
        return ans;
    }
};