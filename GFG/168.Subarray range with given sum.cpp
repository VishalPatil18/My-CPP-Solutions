// My Solution
class Solution{
    public:
    int subArraySum(int arr[], int n, int sum)
    {
        int ans = 0;
        int preSum = 0;
        unordered_map<int, int> hash;
        for(int i=0; i<n; ++i){
            preSum += arr[i];
            if(preSum == sum) ans++;
            if(hash.find(preSum - sum) != hash.end()) ans += hash.find(preSum - sum) -> second;
            hash[preSum]++;
        }
        return ans;
    }
};