// My Solution
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int hash[1001] = {0};
        
        for(int x : nums1) hash[x]++;
        
        for(int i=0; i<nums2.size(); ++i){
            if(hash[nums2[i]] > 0){
                ans.push_back(nums2[i]);
                hash[nums2[i]] *= 0;
            }
        }
        return ans;
    }
};

// Optimized Solution
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s(nums1.begin(), nums1.end());
    vector<int> ans;
    for (int x : nums2)
        if (s.erase(x))
            ans.push_back(x);
    return ans;
}