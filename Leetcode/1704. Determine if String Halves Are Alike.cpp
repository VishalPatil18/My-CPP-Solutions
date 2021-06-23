class Solution {
public:
    bool halvesAreAlike(string s) {
        int vowels = 0;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        for(int i=0; i<s.size()/2; ++i){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vowels++;
        }
        for(int i=s.size()/2; i<s.size(); ++i){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vowels--;
        }
        if(vowels == 0) return true;
        return false;
    }
};