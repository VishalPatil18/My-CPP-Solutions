// My Solution - Brute Force O((m+n)*indices.size())
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans = 0;
        int hash[101] = {0};
        for(int i=0; i<nums.size(); ++i){
            hash[nums[i]]++;
        }
        for(int i=1; i<101; i++)
            if(hash[i] == 1) ans += i;
        
        return ans;
    }
};
