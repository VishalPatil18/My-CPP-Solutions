class Solution{
    public:
        int GCD(int a,int b)
        {
            if(a == 0) return b;
            else if(b == 0) return a;
            
            return GCD(b, a%b);
        }
};