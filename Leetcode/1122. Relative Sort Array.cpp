class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        map<int, int> mp;
        
        for(int i=0; i<arr1.size(); ++i) mp[arr1[i]]++;
        
        for(int i=0; i<arr2.size(); ++i){
            int x = mp.find(arr2[i]) -> second;
            for(int j=0; j<x; ++j) ans.push_back(arr2[i]);
            mp.erase(arr2[i]);
        }
        for(auto x : mp)
            for(int j=0; j<x.second; ++j) ans.push_back(x.first);
        
        return ans; 
    }
};