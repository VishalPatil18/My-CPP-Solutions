// My Solution - Using Graphs disconnected component logic
class Solution {
public:
    int arrayNesting(vector<int>& nums){
        int ans = 0;
        vector<bool> visited(nums.size() + 1, false);
        
        for(int i=0; i<nums.size(); ++i){
            int index = i;
            if(!visited[i]){
                set<int> s;
                while(true){
                    if(s.find(nums[index]) != s.end()) break;
                    visited[index] = true;
                    s.insert(nums[index]);
                    index = nums[index];
                }
                ans = max(ans, (int)s.size());
            }
        }
        
        return ans;
    }
};

// Other Solutions - O(1) Space
class Solution {
public:
    int arrayNesting(vector<int>& nums){
        int ans = 0;
        
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] != INT_MAX){
                int index = nums[i], subans = 0;
                while(nums[index] != INT_MAX){
                    int temp = index;
                    index = nums[index];
                    nums[temp] = INT_MAX;
                    subans++;
                }
                ans = max(ans, subans);
            }
        }
        
        return ans;
    }
};