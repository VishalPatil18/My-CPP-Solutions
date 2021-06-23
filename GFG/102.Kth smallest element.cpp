// Without Sort - Using Priority Queue
class Solution
{
    public:
    int kthSmallest(int arr[], int n, int k)
    {
        priority_queue<int> pq (arr, arr+n);
        int x = n-k;
        while(x--) pq.pop();
        return pq.top();
    }
};