// My Solution
class Solution
{
    public:
    int minNumber(int arr[], int low, int high){
        int mid;
        while(low <= high){
            mid = low + (high - low)/2;
            if(arr[mid] < arr[mid - 1] || high == low) return arr[mid];
            else if(arr[mid] > arr[high]) low = mid + 1;
            else if(arr[mid] < arr[high]) high = mid - 1;
        }
    }
};

// Other Solution
int findMin(int arr[], int low, int high)
{
    while(low < high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid] == arr[high]) high--;
        else if(arr[mid] > arr[high]) low = mid + 1;
        else high = mid;
    }
    return arr[high];
}