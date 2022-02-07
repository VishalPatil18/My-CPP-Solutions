/*** ################# 1 My Solution ################# ***/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size()-1; i++)
            if(nums[i] == nums[i+1]) return nums[i];
        return -1;
    }
};

/*** ################# 2nd Solution ################# ***/
// O(n) time and O(1) space

int findDuplicate3(vector<int> &nums) {
	if (nums.size() > 1) {
		int slow = nums[0];
		int fast = nums[nums[0]];
		
        while (slow != fast) {
			slow = nums[slow];
			fast = nums[nums[fast]];
		}

		fast = 0;
		while (fast != slow) {
			fast = nums[fast];
			slow = nums[slow];
		}
		return slow;
	}
	return -1;
}

/*** ################# 3rd Solution ################# ***/
// O(nlog(n)) time , O(1) space

class Solution {
    int findDuplicate(vector<int>& nums) {
        int n = nums.size() - 1;
        int low = 1;
        int high = n;
        int mid;
        while(low < high){
            mid = low + (high - low)/2;
            int count = 0;
            
            for(int num:nums) if(num <= mid) count++;
            
            if(count > mid) high = mid;
            else low = mid+1; 
        }
        return low;
    }
};

