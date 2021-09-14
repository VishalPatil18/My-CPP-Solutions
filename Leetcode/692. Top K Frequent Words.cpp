// My Solution - Using Priority Queue - MinHeap
typedef pair<int, string> pis;
class Solution {
public:
    struct Comp{
        bool operator()(const pis &a, const pis &b) {
            return a.first>b.first || (a.first==b.first && a.second<b.second);
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        unordered_map<string, int> mp;
        for(auto x : words) mp[x]++;
    
        priority_queue<pis, vector<pis>, Comp> minH;
        for(auto x : mp){
            minH.push({x.second, x.first});
            if(minH.size() > k) minH.pop();
        }
        
        while(!minH.empty()){
            ans.push_back(minH.top().second);
            minH.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};