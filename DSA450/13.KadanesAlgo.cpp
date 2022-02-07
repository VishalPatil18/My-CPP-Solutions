/*** ################# 1 - Kadanes Algo Solution ################# ***/
// time complexity - O(n)

#include<bits/stdc++.h>
using namespace std; 
  
int maxSubArraySum(int a[], int size) { 
    int max_so_far = INT_MIN, max_ending_here = 0;                          
    // max_ending_here is used to look for +ve contiguous segments of array and max_so_far is used to store the max sum of array
    // among the segments encountered so far...  
  
    for (int i = 0; i < size; i++) { 
        max_ending_here = max_ending_here + a[i];                       
        if (max_so_far < max_ending_here) max_so_far = max_ending_here; // if we get new max segment then we update max_so_far
        if (max_ending_here < 0) max_ending_here = 0;                   // max_ending_here is -ve then we discard it
    }
    return max_so_far; 
}

int main() 
{ 
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = sizeof(a)/sizeof(a[0]); 
    int max_sum = maxSubArraySum(a, n); 
    cout << "Maximum contiguous sum is " << max_sum; 
    return 0; 
}

/*** ################# 2 - Dynamic Programming ################# ***/

#include<bits/stdc++.h> 
using namespace std; 

int maxSubArraySum(int a[], int size) { 
    int max_so_far = a[0], curr_max = a[0]; 

    for (int i = 1; i < size; i++) { 
        curr_max = max(a[i], curr_max + a[i]); 
        max_so_far = max(max_so_far, curr_max); 
    }
    return max_so_far;
}

int main() { 
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = sizeof(a)/sizeof(a[0]); 
    int max_sum = maxSubArraySum(a, n); 
    cout << "Maximum contiguous sum is " << max_sum; 
    return 0; 
} 

