class Solution{
public:
    string flipCoins(int N, string s){
        if(s.length() == 1 && s[0] == 1) return "Yes";
        else if(s.length() == 1 && s[0] == 0) return "No";

        for(int i=0; i<s.length()-1; ++i){
            if(s[i] == '0'){
                s[i] = '1';
                s[i+1] = (s[i+1] == '0') ? '1' : '0';
            }
        }

        if(s[s.length()-1] == '0') return "No";
        return "Yes";
    }
};