// My Solution
class Solution{
  public:
    vector<int> countDistinct(int A[], int n, int k)
    {
        vector<int> ans;
        unordered_map<int, int> map;
    
        for(int i=0; i<k; i++) map[A[i]]++;
        
        ans.push_back(map.size());
        
        for(int i=k; i<n; i++){
            map[A[i-k]]--;
            if(map[A[i-k]] == 0) map.erase(A[i - k]);
            map[A[i]]++;
            ans.push_back(map.size());
        }
        return ans;
    }
};