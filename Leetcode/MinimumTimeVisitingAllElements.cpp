/*** 1st Solution ***/

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time = 0;
        for(int i=0;i<points.size()-1;i++) {
            int x = abs(points[i][0]-points[i+1][0]);
            int y = abs(points[i][1]-points[i+1][1]);
            time += max(x,y);
        }
        return time;
    }
};

