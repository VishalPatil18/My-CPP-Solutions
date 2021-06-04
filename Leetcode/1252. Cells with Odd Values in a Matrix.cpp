// My Solution - Brute Force O((m+n)*indices.size())
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int ans = 0;
        vector<vector<int>> mat;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<n; ++j) temp.push_back(0);
            mat.push_back(temp);
        }
        
        for(int i=0; i<indices.size(); ++i){
            int row = indices[i][0];
            int col = indices[i][1];
            
            for(int j=0; j<n; ++j){
                mat[row][j]++;
            }
            for(int j=0; j<m; ++j){
                mat[j][col]++;
            }
        }
        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                if(mat[i][j] % 2 != 0) ans++;
            }
        }
        return ans;
    }
};

// Optimizes Solution

