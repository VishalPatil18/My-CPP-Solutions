/*
	https://www.interviewbit.com/problems/spiral-order-matrix-i/
	Question: 
	---------
	Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.
*/

/*=================================================================================*/

/* method 1:
   --------
	- looping according to the conditions and keeping the track of values covered
	- as soon as the values become more than the array counts we come out of the while loop and return the ans array
*/

vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int i = 0, j = 0, count = 0;
    int m = A.size(), n = A[0].size();
    vector<int> ans;
    
    if(m == 1){
        ans = A[0];
        return ans;
    }
    else if(n == 1){
        for(int x = 0; x < m; x++) ans.push_back(A[x][0]);
        return ans;
    }
    
    while(count < m*n) {
        for(j; j < n; j++) {
            ans.push_back(A[i][j]);
            count++;
        }
        i++; j--;
        for(i; i < m; i++) {
            ans.push_back(A[i][j]);
            count++;
        }
        j--; i--;
        for(j; j>=0; j--) {
            ans.push_back(A[i][j]);
            count++;
        }
        j++; i--;
        for(i; i >= j+1; i--) {
            ans.push_back(A[i][j]);
            count++;
        }
        j++;
    }
    return ans;
}

/*=================================================================================*/

/* method 2:
   --------

*/

algorithms spiral_traverse(vector<vector> ar){
	row:= ar.size();
	col:= ar[0].size();
	top:= 0, bottom := row-1, left:= 0, right:= col-1;
	dir:= 0;
	while top>= bottom && left<= right {
		if(dir == 0) for i := left to right { res.push(ar[top][i]); t++; dir = 1;}
		else if(dir == 1) for i = top to bottom {res.push(ar[i][right]); right–; dir = 2;}
		else if(dir == 2) for i:= right to left {res.push(ar[bottom][i]; bottom–; dir = 3);}
		else for i:bottom to top {res.push(ar[i][left]); left++; dir = 0;}
	}
	return res;
}

/*=================================================================================*/
/*
	Input : [[ 1, 2, 3 ],
			 [ 4, 5, 6 ],
			 [ 7, 8, 9 ]]

	Output: [1, 2, 3, 6, 9, 8, 7, 4, 5]
			
*/