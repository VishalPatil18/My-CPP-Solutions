class Solution{   
public:
    long long subarraySum(long long a[], long long n)
    {
        long long ans = 0;
        
        for(long long int i=0; i<n; ++i){
            ans = (ans + ((a[i] % 1000000007) * ((n-i)*(i+1)))) % (1000000007);
        }
        
        return ans;
    }
};