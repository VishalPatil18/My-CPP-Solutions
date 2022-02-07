/*** ################# 1 - My Solution ################# ***/

// Time complexity - O(n+m), space complexity - O(1)
#include<bits/stdc++.h>
using namespace std;

int main()
{  
    int t=1;
    scanf("%d", &t);
    
    vector<int> ans;
    
    while(t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n], b[m];
        
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        for(int i=0; i<m; i++) scanf("%d", &b[i]);
        
        set<int> temp;
        for(int i=0; i<n; i++) temp.insert(a[i]);
        for(int i=0; i<m; i++) temp.insert(b[i]);
        ans.push_back(temp.size());
    }
    
    for(int x: ans) printf("%d\n", x);
    
	return 0;
}

/*** ################# 2 Solution ################# ***/

// Time Complexity : O(m + n)
#include <bits/stdc++.h> 
using namespace std; 

// Function prints union of arr1[] and arr2[] where, m is the number of elements in arr1[] and n is the number of elements in arr2[]
void printUnion(int arr1[], int arr2[], int m, int n) { 
	int i = 0, j = 0;
	while(i < m && j < n) { 
		if (arr1[i] < arr2[j]) cout << arr1[i++] << " "; 
		else if (arr2[j] < arr1[i]) cout << arr2[j++] << " "; 
		else { 
			cout << arr2[j++] << " "; 
			i++; 
		} 
	}
	
	while (i < m) cout << arr1[i++] << " ";             // Print remaining elements of the larger array
	while (j < n) cout << arr2[j++] << " "; 
}

void printIntersection(int arr1[], int arr2[], int m, int n) { 
    int i = 0, j = 0; 
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) i++; 
        else if (arr2[j] < arr1[i]) j++; 
        else {                                          // if arr1[i] == arr2[j] 
            cout << arr2[j] << " "; 
            i++; j++; 
        } 
    } 
} 

int main() 
{ 
	int arr1[] = { 1, 2, 4, 5, 6 }; 
	int arr2[] = { 2, 3, 5, 7 }; 

	int m = sizeof(arr1) / sizeof(arr1[0]); 
	int n = sizeof(arr2) / sizeof(arr2[0]); 

	printUnion(arr1, arr2, m, n); 

	return 0; 
}

/*** ################# 3 Using Sorting and Searching ################# ***/

#include <algorithm>
#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x);

void printUnion(int arr1[], int arr2[], int m, int n) {                 // Prints union of arr1[0..m-1] and arr2[0..n-1]
	// Before finding union, make sure arr1[0..m-1] is smaller
	if (m > n) {
		int* tempp = arr1;
		arr1 = arr2;
		arr2 = tempp;

		int temp = m;
		m = n;
		n = temp;
	}
	// Now arr1[] is smaller
	// Sort the first array and print its elements (these two steps can be swapped as order in output is not important)
	sort(arr1, arr1 + m);
	for (int i = 0; i < m; i++)
		cout << arr1[i] << " ";

	// Search every element of bigger array in smaller array and print the element if not found
	for (int i = 0; i < n; i++)
		if (binarySearch(arr1, 0, m - 1, arr2[i]) == -1) cout << arr2[i] << " ";
}

void printIntersection(int arr1[], int arr2[], int m, int n) {          // Prints intersection of arr1[0..m-1] and arr2[0..n-1]
	// Before finding intersection, make sure arr1[0..m-1] is smaller
	if (m > n) {
		int* tempp = arr1;
		arr1 = arr2;
		arr2 = tempp;

		int temp = m;
		m = n;
		n = temp;
	}

	// Now arr1[] is smaller so, Sort smaller array arr1[0..m-1]
	sort(arr1, arr1 + m);
	// Search every element of bigger array in smaller array and print the element if found
	for(int i = 0; i < n; i++)
		if (binarySearch(arr1, 0, m - 1, arr2[i]) != -1) cout << arr2[i] << " ";
}
// A recursive binary search function. It returns location of x in given array arr[l..r] is present, otherwise -1
int binarySearch(int arr[], int l, int r, int x) {
	if(r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x) return mid;                                  // If the element is present at the middle itself
		if (arr[mid] > x) return binarySearch(arr, l, mid - 1, x);      // If element is smaller than mid, then it can only be presen in left subarray
		return binarySearch(arr, mid + 1, r, x);                        // Else the element can only be present in right subarray
	}
	return -1;                                                          // We reach here when element is not present in array
}

int main()
{
	int arr1[] = { 7, 1, 5, 2, 3, 6 };
	int arr2[] = { 3, 8, 6, 20, 7 };
	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	cout << "Union of two arrays is n";
	printUnion(arr1, arr2, m, n);
	cout << "\nIntersection of two arrays is n";
	printIntersection(arr1, arr2, m, n);
	return 0;
}


/*** ################# 4 Solution ################# ***/

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    
    while(t--) {
        int n, m, c = 0; cin >> n >> m;
        int a[n+m], h[100001] = {0};
        
        for(int i=0; i<n+m; i++) cin >> a[i];
        for(int i=0; i<n+m; i++) h[a[i]]++;
        for(int i=0; i<100001; i++) if(h[i] > 0) c++;
        
        cout << c << endl;
    }
	return 0;
}