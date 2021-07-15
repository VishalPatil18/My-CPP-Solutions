// My Solution
class Solution {
public:
    string customSortString(string order, string str) {
        string ans;
        map<char, int> mp;
        
        for(int i=0; i<str.length(); ++i) mp[str[i]]++;
        
        for(int i=0; i<order.length(); ++i){
            int x = mp.find(order[i]) -> second;
            for(int j=0; j<x; ++j) ans.push_back(order[i]);
            mp.erase(order[i]);
        }
        for(auto x : mp)
            for(int j=0; j<x.second; ++j) ans.push_back(x.first);
        
        return ans;    
    }
};

// 