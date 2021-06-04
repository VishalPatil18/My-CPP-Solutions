// My Solution - O(m*n)
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        vector<int> min_row, max_col;
        for(int i=0; i<matrix.size(); ++i){
            int min = 100000;
            for(int j=0; j<matrix[i].size(); ++j){
                if(matrix[i][j] < min) min = matrix[i][j];
            }
            min_row.push_back(min);
        }
        
        for(int j=0; j<matrix[0].size(); ++j){
            int max = -1;
            for(int i=0; i<matrix.size(); ++i){
                if(matrix[i][j] > max) max = matrix[i][j];
            }
            max_col.push_back(max);
        }
        for(int i=0; i<min_row.size(); ++i){
            for(int j=0; j<max_col.size(); ++j){
                if(min_row[i] == max_col[j]) ans.push_back(min_row[i]);
            }   
        }
        return ans;
    }
};
