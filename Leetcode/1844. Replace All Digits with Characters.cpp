// My Solution
class Solution {
public:
    string replaceDigits(string s) {
        for(int i=0; i<s.length(); ++i){
            if((int)s[i] <= 57 && (int)s[i] >= 48)
                s[i] = s[i-1] + s[i]-'0';
        }
        return s;
    }
};

// Optimized
