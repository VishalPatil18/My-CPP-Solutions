class Solution{
    public:
    int countOnes(int arr[], int N)
    {
        int low = 0, high = N-1;
        int mid;
        while(low <= high){
            mid = high-low/2;
            if(arr[mid] == 1 && arr[mid+1] == 0) return mid+1;
            else if(arr[mid] == 1 && arr[mid+1] == 1) low = mid+1;
            else if(arr[mid] == 0) high = mid-1;
            else if(mid == N-1) return mid+1;
        }
        return 0;
    }
};