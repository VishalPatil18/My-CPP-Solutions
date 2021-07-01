// My Solution
class Solution
{
    public:
    unsigned int getFirstSetBit(int n)
    {
        if(n == 0) return 0;
        
        unsigned int ans = 0;
        
        while(n != 0){ 
            ans++;
            if(n & 1 == 1) break;
            n = n >> 1;
        }
        
        return ans;
    }
};

// Other Solutions
unsigned int getFirstSetBitPos(int n)
{
    return log2(n & -n) + 1;
}

// Using Left shift(<<) and &
int PositionRightmostSetbit(int n)
{
    int position = 1;
    int m = 1;
 
    while (!(n & m)) {
        m = m << 1;
        position++;
    }
    return position;
}

// Using Right shift
int PositionRightmostSetbit(int n)
{
    int p=1;
    while(n > 0){
        if(n & 1) return p;
        p++;
        n = n >> 1;
    }
    return -1;
}

// Using XOR and Log
unsigned int getFirstSetBit(int n){
    if(n == 0) return 0;
    return log2((n ^ (n-1))+1);
}