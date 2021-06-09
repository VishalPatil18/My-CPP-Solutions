class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int temp_arr[r-l+1];
        int i = l, j = m+1, k = 0;
        while(i <= m && j <= r){
            if(arr[i] <= arr[j]) temp_arr[k++] = arr[i++];
            else temp_arr[k++] = arr[j++];
        }
        while(i <= m) temp_arr[k++] = arr[i++];
        while(j <= r) temp_arr[k++] = arr[j++];
        
        for(i=l, j=0; i<=r; ++i, ++j) arr[i] = temp_arr[j];
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l < r){
            int mid = l + (r-l)/2;
            mergeSort(arr, l, mid);
            mergeSort(arr, mid+1, r);
            merge(arr, l, mid, r);
        }
    }
};