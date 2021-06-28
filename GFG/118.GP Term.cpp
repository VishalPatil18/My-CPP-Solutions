class Solution{
    public:
    double termOfGP(int A,int B,int N)
    {
        double ans = A*(pow((double)B/A, N-1));
        return ans;
    }
};