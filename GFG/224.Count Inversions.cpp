// My Solution
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    void mergeSort(long long arr[], long long low, long long high, long long int &ans)
    {
        if(low >= high) return;
        
        long long mid = low + (high - low)/2;
        mergeSort(arr, low, mid, ans);
        mergeSort(arr, mid+1, high, ans);
        merge(arr, low, mid, high, ans);
    }
    
    void merge(long long arr[], long long low, long long mid, long long high, long long int &ans)
    {
        long long int n1 = mid - low + 1, n2 = high - mid;
        long long int left[n1], right[n2];
        for(long long i=0; i<n1; ++i) left[i] = arr[low + i];
        for(long long i=0; i<n2; ++i) right[i] = arr[mid + i + 1];
        
        long long i=0, j=0, k = low;
        
        while(i < n1 && j < n2){
            if(left[i] <= right[j]) arr[k++] = left[i++];
            else { arr[k++] = right[j++]; ans += (n1 - i); }
        }
        while(i < n1) arr[k++] = left[i++];
        while(i < n2) arr[k++] = right[j++];
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        long long int ans = 0;
        long long low = 0, high = N-1, mid;
        mid = low + (high - low)/2;
        mergeSort(arr, 0, mid, ans);
        mergeSort(arr, mid+1, high, ans);
        merge(arr, 0, mid, high, ans);
        
        return ans;
    }
};