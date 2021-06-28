class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        vector<int> mat;
        for(auto x : matrix){
            for(int y : x) mat.push_back(y);
        }
        sort(mat.begin(), mat.end());
        
        if(mat.size() % 2 != 0) return mat[mat.size()/2];
        
        return (mat[(mat.size()/2) - 1] + mat[mat.size()/2])/2;
    }
};