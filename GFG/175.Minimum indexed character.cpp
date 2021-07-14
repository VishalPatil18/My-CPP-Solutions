// My Solution
class Solution
{
    public:
    int minIndexChar(string str, string patt)
    {
        int hash[26] = {0};
        for(int i=0; i<patt.size(); ++i) hash[patt[i] - 'a']++;
        for(int i=0; i<str.size(); ++i) if(hash[str[i] - 'a'] > 0) return i;
        return -1;
    }
};