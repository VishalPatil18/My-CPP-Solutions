// My Solution
class Solution{
  public:
    vector<int> findPairs(int arr[], int n) 
    {
        vector<int> ans;
        unordered_set<int> s;
        
        for(int i=0; i<n; i++) {
            if(s.find(abs(arr[i])) != s.end()){
                ans.push_back(-abs(arr[i]));
                ans.push_back(abs(arr[i]));
            }
            else s.insert(abs(arr[i]));
        }
        
        return ans;
    }
};