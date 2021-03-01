/*
    https://www.interviewbit.com/problems/max-sum-contiguous-subarray/
*/

int Solution::maxSubArray(const vector<int> &A) {
    int sum = A[0];
    
    for(int i=0; i<A.size(); ++i) {
        int insidesum = A[i];
        int sumCont = insidesum;
        
        for(int j=i+1; j<A.size(); ++j) {
            sumCont += A[j];
            insidesum = max(insidesum, sumCont);
        }
        sum = max(sum, insidesum);
    }
    
    return sum;
}
