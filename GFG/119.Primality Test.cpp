class Solution{
    public:
    bool isPrime(int N)
    {
        if(N == 1) return false;
        
        for(int p=2; p*p<N+1; p++)
            if(N%p == 0) return false;
            
        return true;
    }

};