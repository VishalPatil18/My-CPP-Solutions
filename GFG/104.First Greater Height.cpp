vector<int> greater_height(vector<int>v)
{
    //Your code here
    set<int> s;
    vector<int> ans;
    
    for(int i=0; i<v.size(); ++i){
        auto it = s.upper_bound(v[i]);
        int res = (it != s.end()) ? (*it) : -1;
        ans.push_back(res);
        s.insert(v[i]);
    }
    
    return ans;
}