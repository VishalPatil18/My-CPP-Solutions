// My Solution - Brute Force
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        for(int i=0; i<nums1.size(); ++i){
            int initialSize = ans.size();
            bool found = false;
            for(int j=0; j<nums2.size(); j++){
                if(found && nums2[j] > nums1[i]){
                    ans.push_back(nums2[j]);
                    break;
                }
                else if(nums2[j] == nums1[i]) found = true;
            }
            if(ans.size() == initialSize) ans.push_back(-1);
        }
        return ans;
    }
};

// Optimized Solution
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums2) {
            while (s.size() && s.top() < n) {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans(nums1.size(), -1);
        for (int i=0; i<(int)(nums1.size()); i++) {
            auto itr = m.find(nums1[i]);
            if (itr != m.end()) {
                ans[i] = itr->second;
            }
        }
        return ans;
    }
};

// Using Stack
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> stk;
        for(int i=nums2.size()-1; i>=0; --i){
            if(stk.empty()) mp[nums2[i]] = -1;
            else if(stk.top() > nums2[i]) mp[nums2[i]] = stk.top();
            else{
                while(!stk.empty() && stk.top() <= nums2[i]) stk.pop();
                if(stk.empty()) mp[nums2[i]] = -1;
                else mp[nums2[i]] = stk.top();
            }
            stk.push(nums2[i]);
        }
        vector<int> ans;
        for(int x : nums1) ans.push_back(mp[x]);
        return ans;
    }
};