class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0) return 0;
        else if(nums.size() == 1 && nums[0] != val) return 1;
        else if(nums.size() == 1 && nums[0] == val) return 0;
        int low = -1, high = nums.size();
        while(low < high){
            do{
                low++;
            } while(low<nums.size() && nums[low] != val);
            do{
                high--;
            } while(high>=0 && nums[high] == val);
            if(low >= high) return high+1;
            swap(nums[low], nums[high]);
        }
        return high+1;
    }
};

// CPP 1 Line Sol
int removeElement(vector<int>& nums, int val) {
    return distance(nums.begin(), remove(nums.begin(), nums.end(), val));
}