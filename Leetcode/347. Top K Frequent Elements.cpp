// My Solution - Using Priority Queue
typedef pair<int, int> pii;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int x : nums) mp[x]++;
        
        priority_queue<pii, vector<pii>, greater<pii>> minH;
        for(auto it = mp.begin(); it != mp.end(); it++){
            minH.push({it->second, it->first});
            if(minH.size() > k) minH.pop();
        }
        vector<int> ans;
        while(!minH.empty()){
            ans.push_back(minH.top().second);
            minH.pop();
        }
        return ans;
    }
};