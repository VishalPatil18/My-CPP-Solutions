int transitionPoint(int arr[], int n) {
    // code here
    if(n <= 1 && arr[0] == 1) return 0;
    else if(n <= 1 && arr[0] == 0) return -1;
    
    int ans = -1;
    int low = 0, high = n-1;
    if(arr[low] == 1) ans = 0;
    while(low<=high && low < n-1){
        int mid = (low+high)/2;
        if(arr[mid] == 0 && arr[mid+1] == 1) return mid+1;
        else if(arr[mid] == 0 && arr[mid+1] == 0) low = mid+1;
        else if(arr[mid] == 1 && arr[mid+1] == 1) high = mid-1;
    }
    return ans;
}