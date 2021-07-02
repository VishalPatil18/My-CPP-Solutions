// My Solution
vector<string> powerSet(string s)
{
    vector<string> ans;
    ans.push_back("");
    
    for(int n=0; n<s.length(); ++n){
        int x = ans.size();
        for(int i=0; i<x; ans.push_back(ans[i++] + s[n]));
    }
    
    return ans;
}
