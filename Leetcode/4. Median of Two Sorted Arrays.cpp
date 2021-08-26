// My Solution - O(log(m+n)) Using Binary Search on both arrays combined
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        
        if(m == 0) return (n%2) ? nums2[n/2] : (nums2[n/2] + nums2[n/2 - 1])/(double)2;
        if(n == 0) return (m%2) ? nums1[m/2] : (nums1[m/2] + nums1[m/2 - 1])/(double)2;
        
        int l = (m + n)/2;
        double ans = 0;
        
        int i = 0, j = 0;
        if((m+n) % 2){
            for(int k=0; k<=l; ++k){
                if(i < m && j < n){
                    if(nums1[i] <= nums2[j]) ans = nums1[i++];
                    else ans = nums2[j++];
                }
                else if(i == m) ans = nums2[j++];
                else if(j == n) ans = nums1[i++];
            }
        } else {
            int x = INT_MIN, y = INT_MIN;
            for(int k=0; k<=l; ++k){
                if(i < m && j < n){
                    if(k == l){
                        if(nums1[i] <= nums2[j]) y = nums1[i++];
                        else y = nums2[j++];
                    }
                    else {
                        if(nums1[i] <= nums2[j]) x = nums1[i++];
                        else x = nums2[j++];
                    }
                }
                else if(i == m){
                    if(k == l) y = nums2[j++];
                    else x = nums2[j++];
                }
                else if(j == n){
                    if(k == l) y = nums1[i++];
                    else x = nums1[i++];
                }
            }
            ans = (x + y) / (double)2;
        }
        
        return ans;
    }
};

// Using Kth smallest number logic
class Solution {
public:
    int kth(int a[], int m, int b[], int n, int k) {
        if (m < n) return kth(b,n,a,m,k);
        if (n==0) return a[k-1];
        if (k==1) return min(a[0],b[0]);

        int j = min(n,k/2);
        int i = k-j;
        if (a[i-1] > b[j-1]) return kth(a,i,b+j,n-j,k-j);
        return kth(a+i,m-i,b,j,k-i);
    }

    double findMedianSortedArrays(int a[], int m, int b[], int n) {
        int k = (m+n)/2;
        int m1 = kth(a,m,b,n,k+1);
        if ((m+n)%2==0) {
            int m2 = kth(a,m,b,n,k);
            return ((double)m1+m2)/2.0;
        }
        return m1;
    }
};