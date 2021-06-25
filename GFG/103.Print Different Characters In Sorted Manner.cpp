string Sorted_Characters(string str)
{
    // Your Code Here
    set<char> s;
    for(char x : str) s.insert(x);
    
    string ans;
    for(auto x : s) ans.push_back(x);
    return ans;
}