// My Solution
class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        
        int hash[26] = {0};
        for(char x : s) hash[x - 'a']++;
        for(int i=0; i<n; ++i) if(hash[s[i] - 'a'] == 1) return i;
        return -1;
    }
};