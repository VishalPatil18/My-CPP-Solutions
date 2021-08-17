// My Solution - Brute Force
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rows, cols;
        for(int i=0; i<matrix.size(); ++i)
            for(int j=0; j<matrix[0].size(); ++j)
                if(matrix[i][j] == 0){ rows.insert(i); cols.insert(j); }
        
        for(int x : rows)
            for(int j=0; j<matrix[0].size(); ++j) matrix[x][j] = 0;
        
        for(int x : cols)
            for(int j=0; j<matrix.size(); ++j) matrix[j][x] = 0;
    }
};

// Optimized Solution
void setZeroes(vector<vector<int> > &matrix) {
    int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) col0 = 0;
        for (int j = 1; j < cols; j++)
            if (matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] = 0;
    }

    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 1; j--)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        if (col0 == 0) matrix[i][0] = 0;
    }
}