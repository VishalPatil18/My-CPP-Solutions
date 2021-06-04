class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
        int tempSum = 0, sum = 0;
        
        if(n == 1) return 1;
        
        for (int i=0; i<n; sum += a[i++]);
        
        for (int i=0; i<n; ++i){
            sum -= a[i];
            if (tempSum == sum) return i+1;
            
            tempSum += a[i];
        }
        return -1;
    }
};