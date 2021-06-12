// My Solution
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> rotated = nums;
        for(int i=0; i<nums.size(); ++i) rotated[(i+k)%nums.size()] = nums[i];
        for(int i=0; i<nums.size(); ++i) nums[i] = rotated[i];
    }
};

// Other Solution - O(n*k)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        int temp, previous;
        for (int i = 0; i < k; i++) {
            previous = nums[nums.size() - 1];
            for(int j = 0; j < nums.size(); j++) {
                temp = nums[j];
                nums[j] = previous;
                previous = temp;
            }
        }   
    }
};

// Using Cyclic Replacements - O(1) Space Best Approach
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        int count = 0;
        for(int start=0; count<nums.size(); start++){
            int current = start;
            int prev = nums[start];
            do{
                int next = (current + k) % nums.size();
                int temp = nums[next];
                nums[next] = prev;
                prev = temp;
                current = next;
                count++;
            } while (start != current);
        }
    }
};

// Using Reverse
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        reverse(nums, 0, nums.size()-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, nums.size()-1);
    }
    
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++, end--;
        }
    }
};