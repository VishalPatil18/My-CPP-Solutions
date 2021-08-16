// My Solutions
class Solution {
public:
    static bool comp(vector<int> a, vector<int> b){
        return a[0] < b[0];
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); ++i){
            int j = ans.size()-1;
            if(ans[j][1] >= intervals[i][0]){
                vector<int> temp = ans[j];
                ans.pop_back();
                ans.push_back({temp[0], max(intervals[i][1], temp[1])});
            }
            else ans.push_back(intervals[i]);
        }
        return ans;
    }
};