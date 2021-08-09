// My Solution
class Solution {
  public:
    void findsum(vector<int> &A, int B, vector<vector<int>> &ans, vector<int> subans, int index){
        if(B == 0){
            ans.push_back(subans);
            return;
        }
        
        for(int i=index; i<A.size();++i){
            if(A[i] <= B){
                subans.push_back(A[i]);
                B -= A[i];
                
                findsum(A, B, ans, subans, i);
                
                B += A[i];
                subans.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum(vector<int> &A, int B) {
        sort(A.begin(), A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        vector<vector<int>> ans;
        vector<int> subans;
        findsum(A, B, ans, subans, 0);
        return ans;
    }
};