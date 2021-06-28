class Solution{
    public:
    int digitsInFactorial(int N)
    {
        double count = 0;
        while(N > 0){
            count += log10(N);
            N--;
        }
        return count + 1;
    }
};