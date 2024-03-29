class Solution {
public:
    int guessNumber(int n) {
        long long int low = 0, high = n;
        long long int mid;
        while(low <= high){
            mid = low + (high-low)/2;
            int res = guess(mid);
            if(res == 0) return mid;
            else if(res == -1) high = mid-1;
            else if(res == 1) low = mid+1;
        }
        return -1;
    }
};