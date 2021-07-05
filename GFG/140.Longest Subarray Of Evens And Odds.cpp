// My Solution
class Solution{
    public:
    int maxEvenOdd(int arr[], int n) 
    { 
        int ans = 1, subans = 1;
        for(int i=1; i<n; ++i){
            if((arr[i]%2 == 0 && arr[i-1]%2 != 0) || (arr[i]%2 != 0 && arr[i-1]%2 == 0)) subans++;
            else{
                ans = max(ans, subans);
                subans = 1;
            }
        }
        ans = max(ans, subans);
        return ans;
    } 
};