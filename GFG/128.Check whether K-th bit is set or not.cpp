// My Solution
class Solution
{
    public:
    bool checkKthBit(int n, int k){
        return (((n >> k) & 1) == 1) ? true : false;
    }
};