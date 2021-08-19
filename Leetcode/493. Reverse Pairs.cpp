// My Solution - Using Merge Sort Technique
class Solution {
public:
    void mergeSort(vector<int> &nums, int low, int high, int &ans){
        if(low >= high) return;
        
        int mid = low + (high - low)/2;
        mergeSort(nums, low, mid, ans);
        mergeSort(nums, mid + 1, high, ans);
        merge(nums, low, high, mid, ans);
    }
    
    void merge(vector<int> &nums, int low, int high, int mid, int &ans){
        int l = low, r = mid + 1;
        while(l <= mid && r <= high){
            if((long)nums[l] > (long)2*nums[r]){
                ans += (mid - l + 1); r++;
            } else l++;
        }
        sort(nums.begin() + low, nums.begin() + high + 1);
        return;
    }
    
    int reversePairs(vector<int>& nums) {
        int ans = 0;
        mergeSort(nums, 0, nums.size()-1, ans);
        return ans;
    }
};