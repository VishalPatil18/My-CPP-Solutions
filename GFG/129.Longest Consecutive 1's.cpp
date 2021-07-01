// My Solution
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int ans = 0, subAns = 0;
        while(N > 0){
            if(N & 1) subAns++;
            else subAns = 0;
            
            N = N >> 1;
            ans = max(ans, subAns);
        }
        return ans;
    }
};

// Other Solution
int maxConsecutiveOnes(int x)
{
    int count = 0;
    while(x != 0){
        x = (x & (x << 1));
        count++;
    }
    return count;
}
