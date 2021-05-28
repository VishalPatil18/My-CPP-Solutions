/*
    Question: Find the element that appears once in an array where every other element appears twice.
*/

/*
    SOLUTION 1:
    The best solution is to use XOR. XOR of all array elements gives us the number with a single occurrence. The idea is based on the following two facts.
        a) XOR of a number with itself is 0.
        b) XOR of a number with 0 is number itself.

    The time complexity of this solution is O(n) and it requires O(1) extra space.   
*/

#include <bits/stdc++.h> 
using namespace std; 

// Do XOR of all elements and return
int findSingle(int ar[], int ar_size) 
{     
    int res = ar[0]; 
    for (int i = 1; i < ar_size; i++) 
        res = res ^ ar[i]; 

    return res; 
}
 
int main() 
{ 
    int ar[] = {2, 3, 5, 4, 5, 3, 4}; 
    int n = sizeof(ar) / sizeof(ar[0]); 
    cout << "Element occurring once is " << findSingle(ar, n); 
    return 0;
} 

/* ==================================================================================== */
/*
    SOLUTION 2:
    If we add each number once and multiply the sum by 2, we will get twice the sum of each element of the array. Then we will subtract the sum of the whole array from the twice_sum and get the required number (which appears once in the array).

    Array [] : [a, a, b, b, c, c, d]
    Mathematical Equation = 2*(a+b+c+d) – (a + a + b + b + c + c + d)
    In more simple words: 2*(sum_of_array_without_duplicates) – (sum_of_array)  
*/

#include <bits/stdc++.h> 
using namespace std; 

int singleNumber(int nums[], int n) 
{ 
	map<int,int> m; 
	long sum1 = 0,sum2 = 0; 

	for(int i = 0; i < n; i++) { 
		if(m[nums[i]] == 0) { 
			sum1 += nums[i]; 
			m[nums[i]]++; 
		} 
		sum2 += nums[i]; 
	} 
	
	return 2 * (sum1) - sum2;           // applying the formula. 
} 

int main() 
{ 
	int a[] = {2, 3, 5, 4, 5, 3, 4}; 
	int n = 7;

	cout << singleNumber(a,n) << "\n"; 

	return 0; 
}
