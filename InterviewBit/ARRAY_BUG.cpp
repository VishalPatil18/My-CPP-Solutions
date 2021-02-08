/*
	https://www.interviewbit.com/problems/arraybug/
	Question: 
	---------
	The following code is supposed to rotate the array A by B positions.
	
*/

/*=================================================================================*/

/* method 1:
   --------
	-
	-
*/

vector<int> Solution::rotateArray(vector<int> &A, int B) {
    vector<int> ret;
    int count = 0;
    for (int i = 0; i < A.size(); i++) {
        if((i + B%A.size()) < A.size()){
            ret.push_back(A[(i + B%A.size())]);
            count++;
        }
        else{
            ret.push_back(A[i-count]);
        }
    }
    ret[A.size()-B] = A[B-1];
    return ret; 
}


/*=================================================================================*/
/*	
	Input : A : [1 2 3 4 5 6]
			B : 1
	Output: [2 3 4 5 6 1]

*/