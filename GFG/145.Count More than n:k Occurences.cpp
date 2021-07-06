// My Solution - O(n) time and O(1) Space
class Solution
{
    public:
    int countOccurence(int arr[], int n, int k){
        int ans = 0;
        int maxNo = *max_element(arr, arr+n);
        int hash[maxNo+1] = {0};
        for(int i=0; i<n; ++i) hash[arr[i]]++;
        for(int i=0; i<maxNo+1; ++i) if(hash[i] > n/k) ans++;
        return ans;
    }
};

// Using Moores Voting Algorithm - O(nlogn) time and O(1) Space
class Solution
{
    public:
    int countOccurence(int arr[], int n, int k){
        sort(arr, arr+n);
        int ans = 0, count = 1;
        for(int i=1; i<=n; ++i){
            if(arr[i] == arr[i-1]) count++;
            if(arr[i] != arr[i-1] || arr[i] == arr[n]){
                if(count > n/k) ans++;
                count = 1;
            }
        }
        return ans;
    }
};