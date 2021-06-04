// My Solution - Brute Force O(n^3)
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;
        for(int i=1; i<=arr.size(); i+=2){
            for(int j = 0; j<=arr.size()-i; ++j){
                int temp_ans = 0;
                for(int k=j; k<j+i; ++k){
                    temp_ans += arr[k];
                }
                ans += temp_ans;
            }
        }    
        return ans;
    }
};
// Optimised Solution - O(n)
int sumOddLengthSubarrays(vector<int>& A) {
    int ans = 0,n=arr.size(),i;
    for(i =0;i<n;i++){
        int contribution = ceil((i+1)*(n-i) / 2.0);
        ans += contribution*arr[i];
    }
    return ans;
}
/*
    https://leetcode.com/problems/sum-of-all-odd-length-subarrays/discuss/854184/JavaC%2B%2BPython-O(N)-Time-O(1)-Space

    Every element will contribute size of array to its right (n-i) * size of array to its left(i+1)
    Since here we only consider odd length divide it by two (ceil divison)
    In total, there are k = (i + 1) * (n - i) subarrays
    total times in odd length array with (k + 1) / 2 i.e. (((i + 1) * (n - i)) + 1)/2
    therefore, total contribution of ith element in final_sum = (((i + 1) * (n - i) + 1) / 2) * A[i]
*/