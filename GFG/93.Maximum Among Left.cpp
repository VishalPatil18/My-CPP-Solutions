vector<int> maximum_from_left(vector<int>v)
{
    vector<int> ans;
    int maxUntil = v[0];
    for(int i=1; i<v.size(); ++i){
        if(v[i] > maxUntil){
            ans.push_back(i);
            maxUntil = max(maxUntil, v[i]);
        }
    }
    return ans;
}