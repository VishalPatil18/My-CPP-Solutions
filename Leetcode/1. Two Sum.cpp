// My Solution - Brute Force O(N^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size(); ++i){
            int req = target - nums[i];
            for(int j=i+1; j<nums.size(); ++j) {
                if(nums[j] == req){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
}; 

// O(nlogn) Solution
class Solution {
public:
    static bool mycomp(pair<int, int>a, pair<int, int>b){
        return a.first > b.first;
    }
    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> x;
        for(int i=0; i<nums.size(); ++i) x.push_back({nums[i], i});
        
        sort(x.begin(), x.end(), mycomp);
        int i=0, j=nums.size()-1;
        while(i < j){
            if(x[i].first + x[j].first == target) return {x[i].second, x[j].second};
            else if(x[i].first + x[j].first > target) (x[i].first > x[j].first) ? i++ : j--;
            else (x[i].first < x[j].first) ? i++ : j--;
        }
        return {i, j};
    }
};

// O(N) Solution
vector<int> twoSum(vector<int> &numbers, int target)
{
    unordered_map<int, int> hash;                           // Key is the number and value is its index in the vector.
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        int numberToFind = target - numbers[i];
        
        if (hash.find(numberToFind) != hash.end()){         // if numberToFind is found in map, return them
            result.push_back(hash[numberToFind] + 1);       // +1 because indices are NOT zero based
            result.push_back(i + 1);            
            return result;
        }

        hash[numbers[i]] = i;                               // number was not found. Put it in the map.
    }
    return result;
}

// Same as above just a little bit neater
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> imap;
    
    for (int i = 0; ; ++i){
        auto it = imap.find(target - nums[i]);
        if(it != imap.end()) return vector<int> {i, it->second};
        imap[nums[i]] = i;
    }
}