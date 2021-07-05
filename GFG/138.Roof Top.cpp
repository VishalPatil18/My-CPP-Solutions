// My Solution
class Solution
{
    public:
    int maxStep(int A[], int N)
    {
        int ans = 0, subans = 0;
        for(int i=1; i<N; ++i){
            if(A[i] > A[i-1]) subans++;
            else {
                ans = max(ans, subans);
                subans = 0;
            }
        }
        ans = max(ans, subans);
        return ans;
    }
};