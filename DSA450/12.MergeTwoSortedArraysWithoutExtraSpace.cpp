/*** ################# 1 My Solution ################# ***/
// this solution got TLE
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int ptr = 0;
	    // int loop_range = n;
	    // if(n < m) loop_range = m;
	    
	    while(ptr < n){
	        if(arr1[ptr] >= arr2[0]){
	            // swaping two nos.
	            int temp = arr1[ptr];
	            arr1[ptr] = arr2[0];
	            arr2[0] = temp;
	            sort(arr2, arr2+m);
	        }
	        ptr++;
	    } 
	}
};

/*** ################# 2nd Solution ################# ***/

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
        int i = n-1, j = 0;
        while(i>=0 && j<m) {
            if(arr1[i] >= arr2[j]) swap(arr1[i],arr2[j]);
            i--;
            j++;
        }
        sort(arr1, arr1+n);
        sort(arr2, arr2+m);
    }
};

