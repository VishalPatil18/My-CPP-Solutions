 // My Solution
class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> stk;
        for(int i=0; i<s.length(); ++i){
            if(!stk.empty()){
                auto x = stk.top();
                if(s[i] == x.first) stk.top().second++;
                else stk.push({s[i], 1});
            }
            else stk.push({s[i], 1});
            
            auto y = stk.top();
            if(y.second == k) stk.pop();
        }
        string ans = "";
        while(!stk.empty()){
            auto x = stk.top();
            ans = string(x.second, x.first) + ans;
            stk.pop();
        }
        return ans;
    }
};

// Using Two pointers
string removeDuplicates(string s, int k) {
    int j = 0;
    vector<int> cnt(s.size(), 1);
    for(int i=0; i<s.size(); ++i, ++j){
        s[j] = s[i];
        if(j>0 && s[j] == s[j-1]) cnt[j] = cnt[j - 1] + 1;
        else cnt[j] = 1;
        if(cnt[j] == k) j -= k;
    }
    return s.substr(0, j);
}

// Using Stack
string removeDuplicates(string s, int k) {
    vector<pair<char, short>> st;
    string res;
    for(auto ch : s){
        if(st.empty() || st.back().first != ch) st.push_back({ ch, 0 });
        if(++st.back().second == k) st.pop_back();
    }
    for(auto& p : st) res += string(p.second, p.first);
    return res;
}