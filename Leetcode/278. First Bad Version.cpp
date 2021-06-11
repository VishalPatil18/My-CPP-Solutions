class Solution {
public:
    int firstBadVersion(int n) {
        long long low = 1, high = n;
        long long mid;
        
        while(low < high){
            mid = low + (high - low)/2;
            if(isBadVersion(mid)) high = mid;
            else low = mid + 1;
        }
        return low;
    }
};