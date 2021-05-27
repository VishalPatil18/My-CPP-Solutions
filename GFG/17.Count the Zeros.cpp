class Solution{   
public:
    int countZeroes(int arr[], int n) {
        return n - accumulate(arr, arr+n, 0);
    }
};
