// My Solution
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(int i=1; i<strs.size(); ++i){
            string tempAns;
            int n = min(ans.size(), strs[i].size());
            for(int j=0; j<n; ++j){
                if(strs[i][j] != ans[j]) break;
                else if(strs[i][j] == ans[j]) tempAns.push_back(ans[j]);
            }
            ans = tempAns;
        }
        return ans;
    }
};

// Other Solution 
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        for(int i=0; i<strs[0].length(); i++){
            char c = strs[0][i];
            for(int j=1; j<strs.size(); j++) {
                if(i == strs[j].length() || strs[j][i] != c)
                    return strs[0].substr(0, i);       
            }
        }
        return strs[0];
    }
};

// Using Sort
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string first = strs[0], last = strs.back();
        int c = 0;
        while(c < first.length()){
            if(first[c] == last[c]) c++;
            else break;
        }
        
        return c == 0 ? "" : first.substr(0, c);
    }
};