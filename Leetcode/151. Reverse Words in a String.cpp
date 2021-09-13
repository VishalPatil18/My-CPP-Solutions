// My Solution
class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string word = "";
        bool flag = false;
        
        int i=0;
        while(i < s.length() && s[i] == ' ') i++;
        
        while(i < s.length()){
            if(s[i] == ' ' && !flag){
                ans.push_back(word);
                word = "";
                flag = true;
            }
            else if(s[i] != ' '){
                if(flag) flag = false;
                word += s[i];
            }
            i++;
        }
        if(word.size()) ans.push_back(word);
        
        string res;
        for(int i=ans.size()-1; i>=0; --i){
            res.append(ans[i]);
            res.push_back(' ');
        }
        res.erase(res.end()-1);
        return res;
    }
};

// Other Solutions
class Solution {
public:
    void reverseWords(string &s) {
        int sz = s.size();
        int i = 0, j = 0;
        while(i < sz){
            while(i < sz && s[i] == ' ') i++;              // i is the start of the word
            if(i < sz && j > 0) s[j++] = ' ';
            int start = j;
            while(i < sz && s[i] != ' ') s[j++] = s[i++];
            reverse(s.begin()+start, s.begin()+j);
        }
        s.resize(j);
        reverse(s.begin(), s.end());
    }
};