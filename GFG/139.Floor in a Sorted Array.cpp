// My Solution
class Solution{
  public:
    int findFloor(vector<long long> v, long long n, long long x){
        long long low = 0, high = n - 1;
        long long mid;
        while(low <= high){
            mid = low + (high - low)/2;
            if(v[mid] == x) return mid;
            else if(v[mid] > x) high = mid - 1;
            else low = mid + 1;
        }
        return high;
    }
};
