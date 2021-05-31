class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int jewels_arr[58] = {0};
        int stones_arr[58] = {0};
        
        for(int i=0; i<jewels.length(); ++i){
            jewels_arr[int(jewels[i]) - 65] = 1;
        }
        
        for(int i=0; i<stones.length(); ++i){
            stones_arr[int(stones[i]) - 65] += 1;
        }
        
        for(int i=0; i<58; ++i){
            if((stones_arr[i] && jewels_arr[i]) == false) stones_arr[i] = 0;
        }
        
        int ans = 0;
        for(int i=0; i<58; ++i){
            ans += stones_arr[i];
        }
        
        return ans;
    }
};