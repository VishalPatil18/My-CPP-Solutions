class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int ans = -1;
        long long int low = 1, high = x;
        long long mid;
        
        while(low <= high){
            mid = (low+high)/2;
            if(mid*mid == x) return mid;
            else if(mid*mid > x) high = mid - 1;
            else if(mid*mid < x){
                low = mid + 1;
                ans = max(ans, mid);
            }
        }
        return ans;
    }
};