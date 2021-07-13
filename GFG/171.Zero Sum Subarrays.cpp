// My Solution
class Solution{
    public:
    ll findSubarray(vector<ll> arr, int n ) {
        long long int preSum = 0, ans = 0;
        unordered_map<long long int, long long int> hash;
        for(int i=0; i<n; ++i){
            preSum += arr[i];
            if(preSum == 0) ans++;
            if(hash.find(preSum) != hash.end()) ans += hash[preSum];
            hash[preSum]++;
        }
        return ans;
    }
};