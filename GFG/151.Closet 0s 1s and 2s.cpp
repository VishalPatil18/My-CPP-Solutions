// My Solution
class Solution{
    public:
    void segragate012(int arr[], int N)
    {
        int low = 0, high = N-1, mid=0;
        while(mid <= high){
            if(arr[mid] == 0) swap(arr[mid++], arr[low++]);
            else if(arr[mid] == 1) mid++;
            else swap(arr[mid], arr[high--]);
        }
    }
};