// My Solution
class Solution{
    public:
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A, A+n);
        for(int i=0; i<n-2; ++i){
            int toFind = X - A[i];
            int low = i+1, high = n-1;
            while(low < high){
                if(A[low] + A[high] == toFind) return true;
                else if(A[low] + A[high] < toFind) low++;
                else high--;
            }
        }
        return false;
    }

};