// My Solution - Using Priority Queue - MaxHeap
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, int>> maxH;
        for(int i=0; i<points.size(); ++i){
            int dist = (points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            maxH.push({dist, i});
            if(maxH.size() > k) maxH.pop();
        }
        while(!maxH.empty()){
            int i = maxH.top().second;
            ans.push_back(points[i]);
            maxH.pop();
        }
        return ans;
    }
};