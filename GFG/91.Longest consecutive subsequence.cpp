// My Solution - O(n)
class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int N)
    {
        int ans = -1;
        int hash[100005] = {0};
        for(int i=0; i<N; ++i) hash[arr[i]]++;
        
        int length = 0;
        for(int i=0; i<100005; ++i){
            if(hash[i] >= 1) length++;
            else{
                ans = max(ans, length);
                length = 0;
            }
        }
        return ans;
    }
};
