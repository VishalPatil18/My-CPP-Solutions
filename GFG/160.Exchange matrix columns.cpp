// My Solution
class Solution
{
    public:
    void exchangeColumns(vector<vector<int> > &matrix)
    {
        int n = matrix[0].size();
        for(int i=0; i<matrix.size(); ++i) swap(matrix[i][0], matrix[i][n-1]);
    }
};