int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int RankMe(string str){
    int ans = 0;
    long long int fact = factorial(str.size());
    
    do {
        ans++;
    } while(next_permutation(str.begin(), str.end()));
    
    return fact - ans + 1;
}