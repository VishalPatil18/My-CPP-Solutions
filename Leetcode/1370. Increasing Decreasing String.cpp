class Solution {
public:
    string sortString(string s) {
        string result = "";
        int hash[26] = {0};
        for(int i=0; i<s.length(); hash[s[i++] - 'a']++);
        
        while(true){
            int sum = 0;
            for(int i=0; i<26; sum += hash[i++]);
            if(sum <= 0) break;
            
            for(int i=0; i<26; ++i){
                if(hash[i] > 0){
                    result += ('a' + i);
                    hash[i]--;
                }
            }
            for(int i=25; i>=0; --i){
                if(hash[i] > 0){
                    result += ('a' + i);
                    hash[i]--;
                }
            }
        }
        return result;
    }
};