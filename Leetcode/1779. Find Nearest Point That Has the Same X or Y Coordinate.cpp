// My Solution
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans = 10001, distance = 10001;
        for(int i=0; i<points.size(); ++i){
            if(points[i][0] == x || points[i][1] == y){
                if((abs(points[i][0] - x) + abs(points[i][1] - y)) < distance){
                    distance = (abs(x - points[i][0]) + abs(y - points[i][1]));
                    ans = i;
                }
            }
        }
        if(ans == 10001) ans = -1;
        return ans;
    }
};
