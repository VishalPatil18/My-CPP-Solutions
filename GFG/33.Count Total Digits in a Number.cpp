class Solution{
  public:
    //Complete this function
    int countDigits(int n)
    {
       //Your code here
       if(n <= 9) return 1;
       return countDigits(n/10) + 1;
    }
};