// Question Link - https://leetcode.com/problems/minimum-absolute-difference/

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int min = arr[0], sec_min = arr[1];
        
        // find the abs diff
        int diff = abs(sec_min - min);
        for(int i=1; i<arr.size()-1; i++)
            if(abs(arr[i]-arr[i+1]) < diff) diff = abs(arr[i]-arr[i+1]);
        
        // find the pairs
        for(int i=0; i<arr.size(); i++){
            int x2 = arr[i] + diff;
            
            // searching for x2 in arr using binary search
            if(binary_search(arr.begin(), arr.end(), x2)){
                vector<int> y = {arr[i], x2};
                ans.push_back(y);
            };
        }
        return ans;
    }
};

/*** Second Solution ***/
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        pair<int, vector<vector<int>>> result(INT_MAX, {});
        
        for(int i = 0; i < arr.size() - 1; ++i) {
            if(arr[i + 1] - arr[i] > result.first) continue;
            
            if(arr[i + 1] - arr[i] == result.first)
                result.second.push_back({arr[i], arr[i + 1]});
            else result = {arr[i + 1] - arr[i], {{arr[i], arr[i + 1]}}};
        }
        return result.second;
    }
};