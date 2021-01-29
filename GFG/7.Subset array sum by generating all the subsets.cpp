/*
    Question: Given an array of size N and a sum, the task is to check whether some array elements can be added to sum to N .
*/

// Solution 1: The idea is to generate all subsets using Generate all subsequences of array and correspondingly check if any subsequence has the sum equal to the given sum.

#include <bits/stdc++.h> 
using namespace std; 

// Find way to sum to N using array elements atmost once 
void find(int arr[], int length, int s) 
{ 
	// loop for all 2^n combinations 
	for (int i = 1; i < (pow(2, length)); i++) { 
		int sum = 0;
		for (int j = 0; j < length; j++) 
			// if the bit is 1 then add the element 
			if (((i >> j) & 1)) sum += arr[j]; 

		// if the sum is equal to given sum print yes 
		if (sum == s) { 
			cout << "YES" << endl; 
			return; 
		} 
	} 
    cout << "NO" << endl; 
} 

int main() 
{ 
	int sum = 5; 
	int array[] = { -1, 2, 4, 121 }; 
	int length = sizeof(array) / sizeof(int); 
	find(array, length, sum);                   // find whether it is possible to sum to n 

	return 0; 
} 

/* ==================================================================================== */