class Solution
{
    public:
    void bubbleSort(int arr[], int n){
        for(int i=0; i<n-1; ++i){
            for(int j=i+1; j<n; ++j){
                if(arr[i] > arr[j]){
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }
};
