class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        map<char, int> roman{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        
        for(int i=s.length()-1; i>=1; --i){
            if(s[i-1] != 'I' && s[i-1] != 'X' && s[i-1] != 'C') ans += roman[s[i]];
            else if(s[i-1] == 'I' && (s[i] == 'V' || s[i] == 'X')) ans += roman[s[i--]] - 1;
            else if(s[i-1] == 'X' && (s[i] == 'L' || s[i] == 'C')) ans += roman[s[i--]] - 10;
            else if(s[i-1] == 'C' && (s[i] == 'D' || s[i] == 'M')) ans += roman[s[i--]] - 100;
            else ans += roman[s[i]];
        }
        
        if(s[0] == 'I' && (s[1] == 'V' || s[1] == 'X')) ans += roman[s[0]] - 1;
        else if(s[0] == 'X' && (s[1] == 'L' || s[1] == 'C')) ans += roman[s[0]] - 10;
        else if(s[0] == 'C' && (s[1] == 'D' || s[1] == 'M')) ans += roman[s[0]] - 100;
        else ans += roman[s[0]];
        
        return ans;
    }
};