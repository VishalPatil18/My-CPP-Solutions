/*** ################# 1 - My Solution ################# ***/

// step 1: find the first decreasing element starting from right
// step 2: once its found find the no. just larger than it towards the right
// step 3: swap the two nos.
// step 4: reverse the who array towards the right of the location where no was found 
// Time complexity - O(n)O(n) & Space complexity - O(1)O(1)

class Solution {
public:
    void nextPermutation(vector<int> &num) {
        if (num.empty()) return;
        // in reverse order, find the first number which is in increasing trend (we call it violated number here)
        int i;
        for (i = num.size()-2; i >= 0; --i) if (num[i] < num[i+1]) break;
        // reverse all the numbers after violated number
        reverse(begin(num)+i+1, end(num));
        // if violated number not found, because we have reversed the whole array, then we are done!
        if (i == -1) return;
        // else binary search find the first number larger than the violated number
        auto itr = upper_bound(begin(num)+i+1, end(num), num[i]);
        // swap them, done!
        swap(num[i], *itr);
    }
};

/*** ################# 2nd Solution ################# ***/

void nextPermutation(vector<int>& nums) {
    auto i = is_sorted_until(nums.rbegin(), nums.rend());
    if (i != nums.rend()) swap(*i, *upper_bound(nums.rbegin(), i, *i));
    reverse(nums.rbegin(), i);
}

/*** ################# 3rd Solution ################# ***/

void nextPermutation(vector<int>& nums) {
    int i = nums.size() - 1, k = i;
    while (i > 0 && nums[i-1] >= nums[i]) i--;
    
    for (int j=i; j<k; j++, k--) swap(nums[j], nums[k]);
    if (i > 0) {
        k = i--;
        while (nums[k] <= nums[i]) k++;
        swap(nums[i], nums[k]);
    }

/*** ################# 4th Solution ################# ***/

void nextPermutation(vector<int>& nums) {
    int i = nums.size() - 1, k = i, tmp;
    while (i > 0 && nums[i-1] >= nums[i]) i--;
    for (int j=i; j<k; j++, k--) tmp = nums[j], nums[j] = nums[k], nums[k] = tmp;
    if (i > 0) {
        k = i--;
        while (nums[k] <= nums[i]) k++;
        tmp = nums[i], nums[i] = nums[k], nums[k] = tmp;
    }
}