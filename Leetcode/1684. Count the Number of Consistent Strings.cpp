// My Solution
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        int hash_allowed[26] = {0};
        for(auto x: allowed) hash_allowed[x - 'a']++;
        
        for(int i=0; i<words.size(); ++i){
            int hash_string[26] = {0};
            for(char x: words[i]) hash_string[x - 'a']++;
            
            int j;
            for(j=0; j<26; ++j){
                if(hash_allowed[j]==0 && hash_string[j]>=1) break;
            }
            if(j == 26) ans++;
        }
        return ans;
    }
};

// Optimized
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res = words.size();
        bool alpha[123] = {};
        
        for (char c: allowed) alpha[c] = true;
        
        for (string word: words) {
            for (char c: word) if (!alpha[c]) {
                res--; break;
            }
        }
        return res;
    }
};