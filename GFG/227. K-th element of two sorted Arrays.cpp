// My Solution - O(K)
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        if(m == 0) return arr1[k-1];
        if(k==1) return min(arr1[0], arr2[0]);
        if(n < m){
            swap(arr1, arr2);
            swap(n, m);
        }
        
        int i=0, j=0, ans;
        
        while(k>0 && i < n && j < m){
            if(arr1[i] < arr2[j]) ans = arr1[i++];
            else ans = arr2[j++];
            k--;
        }
        if(i < n) while(k>0) ans = arr1[i++], k--;
        if(j < m) while(k>0) ans = arr2[j++], k--;
        
        return ans;
    }
};