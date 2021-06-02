class Solution{
  public:
    // Complete this function
    int sumOfDigits(int n){
        if(n <= 9) return n;
        return (n%10) + sumOfDigits(n/10);
    }
};
