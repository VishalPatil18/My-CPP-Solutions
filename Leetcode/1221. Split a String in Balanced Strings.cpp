// My Solution
class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int len = 0;
        for(int i=0; i<s.length(); ++i){
            if(s[i] == 'L') len++;
            else len--;
            
            if(len == 0) ans++;
        }
        return ans;
    }
};
