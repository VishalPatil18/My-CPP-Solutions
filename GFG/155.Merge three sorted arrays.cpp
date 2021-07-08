class Solution{
  public:
    vector<int> mergeThree(vector<int>& a, vector<int>& b, vector<int>& c) 
    { 
        vector<int> ans;
        int i = 0, j = 0, k = 0;
        int l = a.size(), m = b.size(), n = c.size();
        int x, y, z, d;
        while(i<l || j<m || k<n){
            x = (i < l) ? a[i] : INT_MAX;
            y = (j < m) ? b[j] : INT_MAX;
            z = (k < n) ? c[k] : INT_MAX;
            d = min(min(x, y), z);
            ans.push_back(d);
            if(i < l && d == a[i]) i++;
            else if(j < m && d == b[j]) j++;
            else k++;
        }
        return ans;
    }
};