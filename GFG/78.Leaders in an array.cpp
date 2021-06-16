class Solution{
    public:
    vector<int> leaders(int a[], int n){
        vector<int> ans;
        ans.push_back(a[n-1]);
        
        int maxNum = a[n-1];
        for(int i=n-2; i>=0; --i){
            maxNum = max(maxNum, a[i]);
            if(maxNum == a[i]) ans.push_back(a[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};