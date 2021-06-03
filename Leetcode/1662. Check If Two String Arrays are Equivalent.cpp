// My Solution
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "", s2 = "";
        for(auto &c : word1) s1 += c;
        for(auto &c : word2) s2 += c;
        
        if(s1 == s2) return true;
        return false;
    }
};

// Using two-part pointers to check the strings in one go
bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
    int p1 = 0, c1 = 0, p2 = 0, c2 = 0;
    while (p1 < w1.size() && p2 < w2.size() && w1[p1][c1] == w2[p2][c2]) {
        if (++c1 == w1[p1].size()) {
            ++p1;
            c1 = 0;
        }
        if (++c2 == w2[p2].size()) {
            ++p2;
            c2 = 0;
        }
    }
    return p1 == w1.size();
}