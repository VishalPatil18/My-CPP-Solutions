class Solution {
public:
    string reverseWords(string s) {
        if(s.length() == 1) return s;
        
        int start = 0, end = 0;
        for(int i=0; i<s.length(); ++i){
            if((s[i] == ' ') || (i == s.length()-1)){
                if(s[i] == ' ') end = i-1;
                else end = i;
                
                while(start < end && end < s.length()){
                    swap(s[start], s[end]);
                    start++, end--;
                }
                start = i+1, end = i+1;
            }
        }
        return s;
    }
};

// Using STL reverse function
class Solution {
public:
    string reverseWords(string s) {
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != ' ') {
                int j = i;
                for(; j < s.length() && s[j] != ' '; j++) { } // move j to the next space
                reverse(s.begin() + i, s.begin() + j);
                i = j - 1;
            }
        }
        
        return s;
    }
};