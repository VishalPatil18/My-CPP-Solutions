class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10);
        string substr = "";
        for(int i=0; i<s.length(); ++i){
            if(s[i] <= '9' && s[i] >= '0'){
                words[s[i] - '0'] = substr;
                substr = "";
                i++;
            }
            else{
                substr += s[i];
            }
        }
        string ans = "";
        for(int i=1; i<10; i++){
            if(words[i] != "") ans += words[i] + " ";
        }
        ans.pop_back();
        return ans;
    }
};