// My Solution
class Solution
{   
    public:
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        set<int> row;
        set<int> col;
        for(int i=0; i<matrix.size(); ++i)
            for(int j=0; j<matrix[0].size(); ++j)
                if(matrix[i][j]){
                    row.insert(i);
                    col.insert(j);
                }
                
        for(auto x : row){
            int i = x;
            for(int j=0; j<matrix[0].size(); ++j) matrix[i][j] = 1;
        }
        for(auto x : col){
            int j = x;
            for(int i=0; i<matrix.size(); ++i) matrix[i][j] = 1;
        }
    }
};

// Other Solutions
class Solution
{   
    public:
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        int row = matrix.size(), col = matrix[0].size();
        bool row0 = false, col0 = false;
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j] == 1){
                    if(i == 0) row0 = true;
                    if(j == 0) col0 =true;
                    matrix[0][j] = 1;
                    matrix[i][0] = 1;
                }
            }
        }
        for(int i=1; i<row; i++){
            for(int j=1; j<col; j++){
                if(matrix[i][0] == 1 || matrix[0][j] == 1) matrix[i][j] = 1;
            }
        }
        
        if(row0) for(int i=0; i<col; i++) matrix[0][i] = 1;
        if(col0) for(int i=0; i<row; i++) matrix[i][0] = 1;
    }
};