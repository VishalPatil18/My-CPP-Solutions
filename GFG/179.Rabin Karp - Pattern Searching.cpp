// My Solution
bool search(string pat, string txt, int q) 
{ 
    int hashPtn = 0, hashTxt = 0;
    for(int i=0; i<pat.size(); ++i){
        hashPtn += pat[i] - 'a' + 1;
        hashTxt += txt[i] - 'a' + 1;
    }
    
    for(int i=0; i<=txt.size() - pat.size(); ++i){
        if(hashPtn == hashTxt){
            bool flag = true;
            for(int j=0; j<pat.size(); ++j){
                if(pat[j] != txt[i+j]){
                    flag = false;
                    break;
                }
            }
            if(flag) return true;
        }
        hashTxt = hashTxt - (txt[i] - 'a' + 1) + (txt[i + pat.size()] - 'a' + 1);
    }
    return false;
} 