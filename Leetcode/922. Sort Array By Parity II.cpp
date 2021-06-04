// My Solution
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans = nums;
        
        for(int i=0; i<ans.size() - 1; ++i){
            if(ans[i]%2 != i%2){
                for(int j=i+1; j<ans.size(); ++j){
                    if(ans[j]%2 != j%2 && (i%2 != j%2)){
                        swap(ans[i], ans[j]);
                        break;
                    }
                }
            }
        }
            
        return ans;
    }
};

// Optimized Solution
vector<int> sortArrayByParityII(vector<int>& A) {
    for (int i = 0, j = 1; i < A.size(); i += 2, j += 2) {
        while (i < A.size() && A[i] % 2 == 0) i += 2;
        while (j < A.size() && A[j] % 2 == 1) j += 2;
        if (i < A.size()) swap(A[i], A[j]);
    }
    return A;
}