// My Solution - Using Sort O(NlogN)
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k){
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
};

// Using Priority Queue - O(NlogK)
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minH;
        for(int i=0; i<nums.size(); ++i){
            minH.push(nums[i]);
            if(minH.size() > k) minH.pop();
        }
        return minH.top();
    }
};