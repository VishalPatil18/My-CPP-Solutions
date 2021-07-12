// My Solution
class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> hash;
        int preSum = 0;
        for(int i=0; i<n; ++i){
            preSum += arr[i];
            if(preSum == 0 || (hash.find(preSum) != hash.end())) return true;
            hash.insert(preSum);
        }
        return false;
    }
};