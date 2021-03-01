/*
    https://www.interviewbit.com/problems/add-one-to-number/
*/

vector<int> Solution::plusOne(vector<int> &A) {
    reverse(A.begin(), A.end());
    if(A[0] < 9) A[0] += 1;
    else if(A[0] == 9) {
        int carry = 1, i = 0;
        while(carry != 0 && i < A.size()) {
            if(A[i] < 9){
                A[i] += carry;
                carry = 0;
            }
            else A[i] = 0;
            i++;
        }
        A.push_back(carry);
    }
    int i = A.size()-1;
    while(A[i] == 0){
        A.pop_back();
        i--;
    }
    
    reverse(A.begin(), A.end());
    return A;
}

