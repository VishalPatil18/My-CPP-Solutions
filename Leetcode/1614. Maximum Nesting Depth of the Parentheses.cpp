// My Solution
class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        stack<char> brackets;
        for(int i=0; i<s.length(); ++i){
            if(brackets.size() > ans) ans = brackets.size();
            
            if(s[i] == '(') brackets.push('(');
            else if(s[i] == ')') brackets.pop();
        }
        return ans;
    }
};
