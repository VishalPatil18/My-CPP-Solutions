class Solution{
    public:
    int searchInSorted(int arr[], int N, int K) 
    { 
        int low = 0, high = N-1;
        long long int mid;
        
        while(low <= high){
            mid = (low+high)/2;
            if(arr[mid] == K) return 1;
            else if(arr[mid] > K) high = mid-1;
            else if(arr[mid] < K) low = mid+1;
        }
        return -1;
    }
};