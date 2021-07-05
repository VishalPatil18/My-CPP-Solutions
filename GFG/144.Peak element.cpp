// My Solution - O(logn)
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        int low = 0, high = n-1;
        int mid;
        while(low <= high){
            mid = low + (high - low)/2;
            if((mid == 0 || arr[mid - 1] <= arr[mid]) &&
               (mid == n-1 || arr[mid + 1] <= arr[mid]))
                return mid;
            if(mid > 0 && arr[mid - 1] >= arr[mid]) high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
};

// Other Solution - O(1)
int findPeak(int arr[], int n)
{
    // first or last element is peak element
    if(n == 1) return 0;
    if(arr[0] >= arr[1]) return 0;
    if(arr[n - 1] >= arr[n - 2]) return n - 1;

    for(int i=1; i<n-1; i++){
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) return i;
    }
}