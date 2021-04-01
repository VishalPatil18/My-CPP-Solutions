class Solution{
  public:
    //Complete this function
    bool isIsogram(string s)
    {
        //Your code here
        int hash[26] = {0};
        for(int i=0; i<s.size(); ++i) {
            hash[s[i] - 'a']++;
        }
        for(int i=0; i<26; ++i) 
            if(hash[i] > 1) return false;
        return true;
    }
};