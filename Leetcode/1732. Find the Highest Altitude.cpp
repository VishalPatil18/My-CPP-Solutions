// My Solution - Brute Force O(n)
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0, temp_ans = 0;
        for(int i=0; i<gain.size(); ++i){
            temp_ans += gain[i];
            if(ans < temp_ans) ans = temp_ans;
        }
        return ans;
    }
};
