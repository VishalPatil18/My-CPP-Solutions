// My Solution
class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int hash[26] = {0};
        for(string x : words){
            for(int i=0; i<x.length(); ++i){
                hash[x[i] - 'a']++;
            }
        }
        for(int i=0; i<26; ++i){
            if(hash[i]%(words.size()) != 0) return false;
        }
        return true;
    }
};

// Other Solutions
bool makeEqual(vector<string>& words) {
    int cnt[26] = {};
    for (auto &w : words)
        for (auto ch : w)
            ++cnt[ch - 'a'];
    return all_of(begin(cnt), end(cnt), [&](int c) { return c % words.size() == 0; });
}
