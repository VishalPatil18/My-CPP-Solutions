class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> ans;
        int hash[n] = {0};
        for(int i=0; i<n; ++i){
            hash[arr[i]]++;
        }
        for(int i=0; i<n; ++i){
            if(hash[i] > 1) ans.push_back(i);
        }
        vector<int> temp;
        temp.push_back(-1);
        if(ans.size() == 0) return temp;
        return ans;
    }
};