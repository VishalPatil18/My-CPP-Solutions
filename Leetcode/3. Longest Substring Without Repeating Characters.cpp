// My Solution
class Solution {
public:
    int lengthOfLongestSubstring(string s){
        int ans = 0, subans = 0, j = 0;
        set<char> contains;
        for(int i=0; i<s.length(); ){
            if(contains.count(s[i]) == 0){
                contains.insert(s[i++]);
                ans = max(ans, (int)contains.size());
            } else contains.erase(s[j++]);
        }
        return ans;
    }
};