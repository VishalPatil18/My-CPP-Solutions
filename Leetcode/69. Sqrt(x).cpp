class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1) return x;
        
        long long low = 1, high = x;
        long long mid;
        
        while(low < high){
            mid = low + floor((high-low)/2);
            
            if(mid*mid == x) return mid;
            else if(mid*mid > x) high = mid;
            else if(mid*mid < x) low = mid+1;
        }
        return low-1;
    }
};