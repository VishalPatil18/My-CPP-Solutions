// My Solution
class Solution
{
    public:
    bool isSubSequence(string A, string B)
    {
        int i=0, j=0;
        while(j < B.length() && i < A.length()){
            if(A[i] == B[j]) i++;
            j++;
        }
        if(i == A.length()) return true;
        return false;
    }
};