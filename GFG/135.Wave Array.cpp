// My Solution
class Solution{
    public:
    void convertToWave(vector<int>& arr, int n){
        for(int i=0; i<n-1; ++i){
            if(i % 2) {
                if(arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);
            }
            else {
                if(arr[i] < arr[i+1]) swap(arr[i], arr[i+1]);
            }
        }
    }
};

// If Given array is not Sorted
void sortInWave(int arr[], int n)
{
    for(int i=0; i<n; i+=2) {                                           // Traverse all even elements
        if(i>0 && arr[i-1] > arr[i] ) swap(&arr[i], &arr[i-1]);         // If current even element is smaller than previous
        if(i<n-1 && arr[i] < arr[i+1] ) swap(&arr[i], &arr[i + 1]);     // If current even element is smaller than next
    }
}