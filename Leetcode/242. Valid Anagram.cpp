/*
	https://leetcode.com/problems/valid-anagram/
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash_s[26] = {0};
        int hash_t[26] = {0};
        
        for(auto x: s) hash_s[(int)x - 97]++;
        for(auto x: t) hash_t[(int)x - 97]++;
        
        bool flag = true;
        for(int i=0; i<26; ++i){
            if(hash_s[i] != hash_t[i]) return false; 
        }
        return true;
    }
};