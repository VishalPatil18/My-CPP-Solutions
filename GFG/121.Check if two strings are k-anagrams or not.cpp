bool areKAnagrams(string str1, string str2, int k){
    if(str1.size() != str2.size()) return false;
    
    int hash1[26] = {0}, hash2[26] = {0};
    
    for(auto x : str1) hash1[x - 'a']++;
    for(auto x : str2) hash2[x - 'a']++;
    
    int s = 0;
    
    for(int i=0 ; i<26; i++) if(hash1[i] > hash2[i]) s += hash1[i] - hash2[i];
    
    if(s > k) return false;
    return true;
}