// My Solution - using XOR
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int x : nums){
            ans ^= x;
        }
        return ans;
    }
};

// Other SOlutions
vector<int> plusOne(vector<int>& digits) {
    for (int i=digits.size(); i--; digits[i] = 0)
        if (digits[i]++ < 9) return digits;
    digits[0]++;
    digits.push_back(0);
    return digits;
}
