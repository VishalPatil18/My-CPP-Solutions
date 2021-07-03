// My Solution
class Solution{
    public:
    int maxOccured(int L[], int R[], int n, int maxx){
        int hash[maxx+1] = {0};
        
        for(int i=0; i<n; ++i)
            for(int j=L[i]; j<=R[i]; ++j) hash[j]++;
        
        int ans = 0, maxElement = hash[0];
        for(int i=1; i<maxx+1; ++i){
            if(hash[i] > maxElement){ ans = i; maxElement = hash[i]; }
        }
        
        return ans;
    }
};
