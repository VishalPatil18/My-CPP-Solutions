// My Solution - Using Priority Queue - MinHeap
class Solution {
public:
    struct Comp{
        bool operator()(const string &a, const string &b) {
            if(a.length() != b.length()) return a.length() > b.length();
            else return a > b;
        }
    };
        
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string, vector<string>, Comp> minH;
        for(int i=0; i<nums.size(); ++i){
            minH.push(nums[i]);
            if(minH.size() > k) minH.pop();
        }
        return minH.top();
    }
};