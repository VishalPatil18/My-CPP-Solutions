vector<string> login_system(vector<string> v)
{
    vector<string> ans;
    map<string, int> mp;
    for(int i=0; i<v.size(); ++i){
        string tempAns = "";
        mp[v[i]]++;
        if(mp[v[i]] > 1) ans.push_back(v[i] + to_string(mp[v[i]] - 1));
        else ans.push_back(v[i]);
    }
    return ans;
}