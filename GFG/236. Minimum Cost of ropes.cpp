// My Solution - Using Priority Queue (MinHeap)
class Solution
{
    public:
    long long minCost(long long arr[], long long n) {
        long long ans = 0;
        priority_queue<long long, vector<long long>, greater<long long>> minH;
        for(long long i=0; i<n; ++i) minH.push(arr[i]);
        
        while(minH.size() > 1){
            long long int sum = minH.top();
            minH.pop();
            
            sum += minH.top();
            minH.pop();
            
            ans += sum;
            minH.push(sum);
        }
        return ans;
    }
};