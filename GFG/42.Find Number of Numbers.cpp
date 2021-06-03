int num(int a[], int n, int k)
{
    int ans = 0;
    for(int i=0; i<n; ++i){
        while(a[i]>0){
            int digit = a[i]%10;
            a[i] /= 10;
            if(digit == k) ans++;
        }
    }
    return ans;
}