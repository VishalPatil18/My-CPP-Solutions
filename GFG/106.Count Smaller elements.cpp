class Solution{
public: 
    vector<int> constructLowerArray(int *arr, int n) {
        vector<int> ans;
        multiset<int> s;
        
        for(int i=n-1; i>=0; i--){ 
            s.insert(arr[i]);
            auto it = s.lower_bound(arr[i]);
            ans.push_back(distance(s.begin(), it));
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
