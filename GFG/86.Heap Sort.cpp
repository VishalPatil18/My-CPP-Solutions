class Solution{
    public:
    void heapify(int arr[], int n, int i){
        int idx = i, left = (2*i)+1, right = (2*i)+2;
        
        if(left < n && arr[idx] < arr[left]) idx = left ;
        if(right < n && arr[idx] < arr[right]) idx = right;
        
        if(idx != i){
            swap(arr[i], arr[idx]);
            heapify(arr, n, idx);
        }
    }

    void buildHeap(int arr[], int n){
        int s = (n-1)/2;
        for(int i=s; i>=0; --i) heapify(arr, n, i);
    }
    
    void heapSort(int arr[], int n){
        buildHeap(arr, n);
        for(int i=n-1; i>0; i--){
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
    }
};
