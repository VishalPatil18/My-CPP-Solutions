class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
        {
            vector<int> ans;
            map<int, int> m;
            for(int i=0; i<v1.size(); i++) m[v1[i]]++;
            
            for(int i=0;i<v2.size(); i++){
                if(m[v2[i]]>0){
                    ans.push_back(v2[i]);
                    m[v2[i]]--;
                }
            }
            
            sort(ans.begin(), ans.end());
            return ans;
        }
};