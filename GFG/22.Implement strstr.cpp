int strstr(string s, string x)
{   
    int substr_len = x.length();
    if(substr_len > s.length()) return -1;
    for(int i=0; i<=(s.length() - substr_len); i++){
        if(x[0] == s[i]) {
            int j=0;
            for(j=0; j<substr_len; j++){
                if(s[i+j] != x[j]) break;
            }
            if(j == substr_len) return i;
        }
    }
    return -1;
}