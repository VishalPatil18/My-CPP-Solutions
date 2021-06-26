class Solution{
    public:
        string TieBreak(string names[], int n)
        {
            map<string, int>mp;
            for(int i=0; i<n; mp[names[i++]]++);
            
            int maxVotes = -1;
            string res;
            
            for(auto x : mp){
                if(x.second > maxVotes){
                    maxVotes = x.second;
                    res = x.first;
                }
            }
            
            return res;
        }
};