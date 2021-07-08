// My Solution
class Solution{
    public:
    int closer(int arr[],int n, int x)
    {
        int low = 0, high = n-1;
        int mid;
        while(low <= high){
            mid = low + (high - low)/2;
            if(arr[mid] == x) return mid;
            else if(mid > 0 && arr[mid - 1] == x) return mid - 1;
            else if(mid < n-1 && arr[mid + 1] == x) return mid + 1;
            else if(arr[mid] > x) high = mid-1;
            else low = mid+1;
        }
        return -1;
    }
};