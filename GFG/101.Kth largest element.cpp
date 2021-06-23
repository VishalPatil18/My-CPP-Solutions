// Using Sort
class Solution
{
    public:
    int KthLargest(int arr[], int n, int k) {
        sort(arr, arr+n, greater<int>());
        return arr[k-1];
    }
};

// Without Sort - Using Priority Queue
class Solution
{
    public:
    //Function to return kth largest element from an array.
    int KthLargest(int arr[], int n, int k) {
        priority_queue<int> pq (arr, arr+n);
        k--;
        while(k--){
            pq.pop();
        }
        return pq.top();
    }
};

