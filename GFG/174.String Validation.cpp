// My Solution
bool validate(string s)
{
    int a = 0, b = 0, c = 0, d = 0;
    if(s.size() < 10) return false;
    
    for(int i=0; i<s.size(); ++i){
        if(s[i] > 96 && s[i] < 123) b = 1;
        if(s[i] > 48 && s[i] < 58) d = 1;
        if(s[i] > 64 && s[i] < 91) a = 1;
        if(s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '*' || s[i] == '-') c = 1;
    }
    
    if(c && b && a && d) return true;
    else return false;
}