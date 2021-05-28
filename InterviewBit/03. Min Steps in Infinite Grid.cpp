/*
	https://www.interviewbit.com/problems/min-steps-in-infinite-grid/
*/

/*=================================================================================*/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    // when a and b have only one element or no element
    if(A.size() <= 1) return 0;
    
    int ans = 0;
    for(int i=1; i<A.size(); ++i){
        ans += max(abs(A[i] - A[i-1]), abs(B[i] - B[i-1]));
    }
    return ans;
}
