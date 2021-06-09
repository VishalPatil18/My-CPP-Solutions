// My Solution
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;
        
        int i=0, j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] == nums2[j]){
                ans.push_back(nums1[i]);
                i++; j++;
            }
            else if(nums1[i] < nums2[j]) i++;
            else if(nums1[i] > nums2[j]) j++;
        }
        return ans;
    }
};

// Optimized Solution
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> mp;
    for (auto& num : nums1) mp[num]++;
    nums1.clear();
    for (auto& num : nums2) 
        if (mp.find(num) != mp.end() and mp[num]-- > 0) nums1.push_back(num);
    return nums1;
}