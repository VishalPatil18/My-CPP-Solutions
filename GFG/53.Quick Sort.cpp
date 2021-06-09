class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low < high){
            int p = partition(arr, low, high);
            quickSort(arr, low, p);
            quickSort(arr, p+1, high);
        }
    }
    
    int partition (int arr[], int low, int high)
    {
        int pivot = arr[low];
        int i = low-1, j = high+1;
        while(true){
            do{
                i++;
            } while(arr[i] < pivot);
            do{
                j--;
            } while(arr[j] > pivot);
            if(j <= i) return j;
            swap(arr[i], arr[j]);
        }
    }
};