class Solution{
  public:
    vector<string> winner(string arr[],int n)
    {
        vector<string> ans;
        map<string, int>m;
        for(int i=0; i<n; m[arr[i++]]++);
        
        int res_ind = -1;
        string res;
        
        for(auto x : m){
            if(x.second > res_ind){
                res_ind = x.second;
                res = x.first;
            }
        }
        
        ans.push_back(res);
        ans.push_back(to_string(res_ind));
        return ans;
    }
};