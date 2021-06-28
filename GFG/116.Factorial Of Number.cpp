class Solution{
    public:
    long long factorial(int N) {
        long long ans = 1;
        while(N > 0){
            ans *= N;
            N--;
        }
        return ans;
    }
};