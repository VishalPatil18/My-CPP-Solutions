class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        if(arr.size() == 3) return 1;
        int low = 1, high = arr.size()-2;
        int mid;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]) return mid;
            else if(arr[mid] > arr[mid+1] && arr[mid] < arr[mid-1]) high = mid-1;
            else if(arr[mid] < arr[mid+1] && arr[mid] > arr[mid-1]) low = mid+1;
        } 
        return -1;
    }
};