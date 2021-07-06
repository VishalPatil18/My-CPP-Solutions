// My Solution - O(N) time and O(max) Aux. Space
class Solution
{
    public:
    int missingNumber(int arr[], int n) 
    { 
        int max = *max_element(arr, arr+n);
        int hash[max + 1] = {0};
        for(int i=0; i<n; ++i) if(arr[i] > 0) hash[arr[i]]++;
        
        for(int i=1; i<max+1; ++i) if(hash[i] == 0) return i;
        return max+1;
    } 
};

// Other Solution - O(nlogn) time and O(1) Aux. Space
class Solution
{
    public:
    int missingNumber(int arr[], int n) 
    { 
        sort(arr, arr+n);
        int tempNum = 1;
        for(int i=0; i<n; ++i)
            if(arr[i] == tempNum) tempNum++;
        return tempNum;
    } 
};