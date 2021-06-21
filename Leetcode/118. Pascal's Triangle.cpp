class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0; i<numRows; ++i){
            vector<int> tempAns;
            
            tempAns.push_back(1);
            for(int j=1; j<i; j++) tempAns.push_back(ans[i-1][j-1]+ans[i-1][j]);
            if(i >= 1) tempAns.push_back(1);
            
            ans.push_back(tempAns);
        }
        return ans;
    }
};

// Other Solutions
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(auto i=0;i<numRows;++i)
        {
            res.push_back(vector<int>(i+1,1));
            for(auto j=1; j<i; ++j) res[i][j] = res[i-1][j-1] + res[i-1][j];
        }
        return res;
    }
};