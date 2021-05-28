class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        for(int i=0; i<n; i++){
            vector<int> row = matrix[i];
            
            for(int j=i+1; j<n; j++){
                int temp = matrix[j][i];
                matrix[j][i] = row[j];
                matrix[i][j] = temp;
            }
        }
    }
};