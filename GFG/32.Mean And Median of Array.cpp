class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        sort(A,A+N);
        if( N%2 != 0){
            N = N/2;
            return A[N];
        }
        else{
            int median1 = (A[N/2] + A[N/2 - 1])/2;
            return median1;
        }
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        int sum = 0, mean;
        for(int i=0; i<N; ++i){
            sum += A[i];
            mean = sum/N;
        }
        return mean;
    }
};