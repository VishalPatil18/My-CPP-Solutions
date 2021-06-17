class Solution{
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int> ans(n, 0);
        long long int productAll = 1;
        int zeroPresent = 0;
        for(int i=0; i<n; ++i)
            if(nums[i] == 0) zeroPresent++;
            else productAll *= nums[i];
        
        if(zeroPresent == 1) for(int i=0; i<n; ++i) if(nums[i] == 0) ans[i] = productAll;
        else if(zeroPresent >= 2) return ans;
        else for(int i=0; i<n; ++i) ans[i] = (productAll/nums[i]);

        return ans;
    }
};

// Other Method - Less Iterations
void productArray(int arr[], int n){
    if (n == 1) return;

    int i, temp = 1;
    int* prod = new int[(sizeof(int) * n)];
    memset(prod, 1, n);

    /* In this loop, temp variable contains product of elements on left side excluding arr[i] */
    for(i = 0; i < n; temp *= arr[i++]) prod[i] = temp;

    /* Initialize temp to 1 for product on right side */
    temp = 1;

    /* In this loop, temp variable contains product of elements on right side excluding arr[i] */
    for (i = n - 1; i >= 0; temp *= arr[i--]) prod[i] *= temp;

    /* print the constructed prod array */
    for (i = 0; i < n; i++) cout << prod[i] << " ";
}

// Using Log
void productPuzzle(int a[], int n)
{
    // to hold sum of all values
    long double sum = 0;
    for(int i=0; i<n; i++) sum += (long double)log10(a[i]);

    // output product for each index antilog to find original product value
    for(int i=0; i<n; i++) cout << (int)(EPS + pow((long double)10.00, sum - log10(a[i]))) << " ";
}