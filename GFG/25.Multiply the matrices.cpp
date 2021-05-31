class Solution
{   
    public:
    //Function to multiply two matrices.
    vector<vector<int>> multiplyMatrix( const vector<vector<int>> &A, const vector<vector<int>> &B)
    {
        vector<vector<int>> ans;
        if(A[0].size() != B.size()) return ans;
        
        for(int i=0; i<A.size(); ++i){
            vector<int> mul;
            
            for(int j=0; j<B[0].size(); ++j){
                int singlemul = 0;
                for(int k = 0; k<A[0].size(); ++k){
                    singlemul += A[i][k]*B[k][j];
                }
                mul.push_back(singlemul);
            }
            ans.push_back(mul);
        }
        return ans;
    }
};
