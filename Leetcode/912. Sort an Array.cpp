// My Solution - Using Priority Queue - MinHeap
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> minH;
        for(int i=0; i<nums.size(); ++i) minH.push(nums[i]);
        
        for(int i=0; i<nums.size(); ++i){
            nums[i] = minH.top();
            minH.pop();
        }
        return nums;
    }
};