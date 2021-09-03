class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        bool t[N+1][sum+1];
        memset(t, false, sizeof(t));
        
        for(int i=0; i<N+1; ++i) t[i][0] = true;
        
        for(int i=1; i<N+1; ++i)
            for(int j=1; j<sum+1; ++j){
                if(arr[i-1] <= j) t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
                else t[i][j] = t[i-1][j];
            }
        return t[N][sum];
    }
};