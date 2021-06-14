// My Solution
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int index = 0;
        for(int i=1; i<=n; ++i){
            if(target[index] == i){
                ans.push_back("Push");
                index++;
                if(index == target.size()) return ans;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};

// Other Solution
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int j=0;
        for(int i=1; i<=n && j<target.size(); i++) {
            ans.push_back("Push");
            if(target[j] == i) j++;
            else ans.push_back("Pop");
        }
        return ans;
    }
};