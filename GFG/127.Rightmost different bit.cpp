// My Solution
class Solution
{
    public:
    int posOfRightMostDiffBit(int m, int n){
        int x = m ^ n;
        if(x == 0) return 0;
        return log2((x ^ (x-1))+1);
    }
};