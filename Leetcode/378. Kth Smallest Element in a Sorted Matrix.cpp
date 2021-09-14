// My Solution - Priority Queue O(N*NlogK)
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> maxH;
        for(auto x : matrix){
            for(int y : x){
                maxH.push(y);
                if(maxH.size() > k) maxH.pop();
            }
        }
        return maxH.top();
    }
};