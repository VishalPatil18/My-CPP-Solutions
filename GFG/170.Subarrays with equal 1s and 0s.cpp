// My Solution
class Solution{
  public:
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        long long int ans = 0;
        for(int i=0; i<n; ++i) if(arr[i] == 0) arr[i] = -1;
        
        long long int preSum = 0;
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