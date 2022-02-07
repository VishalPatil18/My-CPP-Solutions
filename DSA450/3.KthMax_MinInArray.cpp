/*** ################# 1 - My Solution - O(nlog(n)) ################# ***/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t = 1;
	cin >> t;
	vector<int> ans;
	while(t--) {
	    int n, k;
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++) cin >> arr[i];
	    cin >> k;
	    
	    sort(arr, arr+n);
	    ans.push_back(arr[k-1]);
	}
	
	for(int x: ans) cout << x << endl;
	
	return 0;
}

/*** ################# 2 - Using Min Heap(HeapSelect) solution ################# ***/
// Time complexity - O(n + KLogn)

#include <climits> 
#include <iostream> 
using namespace std; 

void swap(int *x, int *y);                              // Prototype of a utility function to swap two integers 

class MinHeap {                                         // A class for Min Heap 
	int *harr;                                          // pointer to array of elements in heap 
	int capacity;                                       // maximum possible size of min heap 
	int heap_size;                                      // Current number of elements in min heap 
    public: 
        MinHeap(int a[], int size);                     // Constructor 
        void MinHeapify(int i);                         // To minheapify subtree rooted with index i 
        int parent(int i) { return (i - 1) / 2; } 
        int left(int i) { return (2 * i + 1); } 
        int right(int i) { return (2 * i + 2); } 
        int extractMin();                               // extracts root (minimum) element 
        int getMin() { return harr[0]; }                // Returns minimum 
}; 

MinHeap::MinHeap(int a[], int size) {                   // constructor function
	heap_size = size; 
	harr = a;                                           // store address of array 
	int i = (heap_size - 1) / 2; 
	while (i >= 0) MinHeapify(i--);
} 

int MinHeap::extractMin() {                             // Method to remove minimum element (or root) from min heap
	if (heap_size == 0) return INT_MAX; 
	
	int root = harr[0];                                 // Store the minimum value
	if (heap_size > 1) {                                // If there are more than 1 items, move the last item to root and call heapify. 
		harr[0] = harr[heap_size - 1]; 
		MinHeapify(0); 
	} 
	heap_size--; 

	return root; 
} 

// A recursive method to heapify a subtree with root at given index 
// This method assumes that the subtrees are already heapified
void MinHeap::MinHeapify(int i) {
	int l = left(i); 
	int r = right(i); 
	int smallest = i; 
	if (l < heap_size && harr[l] < harr[i]) smallest = l; 
	if (r < heap_size && harr[r] < harr[smallest]) smallest = r; 
	if (smallest != i) { 
		swap(&harr[i], &harr[smallest]); 
		MinHeapify(smallest); 
	} 
}

void swap(int* x, int* y) {                             // A utility function to swap two elements 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
} 

int kthSmallest(int arr[], int n, int k) {              // Function to return k'th smallest element in a given array 
	MinHeap mh(arr, n);                                 // Build a heap of n elements: O(n) time 
	for (int i = 0; i < k - 1; i++)                     // Do extract min (k-1) times 
		mh.extractMin(); 

	return mh.getMin();                                 // Return root 
} 

int main() 
{ 
	int arr[] = { 12, 3, 5, 7, 19 }; 
	int n = sizeof(arr) / sizeof(arr[0]), k = 2; 
	cout << "K'th smallest element is " << kthSmallest(arr, n, k); 
	return 0; 
}

/*** ################# 3 - Using Max-Heap ################# ***/

#include <climits> 
#include <iostream> 
using namespace std; 


void swap(int* x, int* y);                              // Prototype of a utility function to swap two integers 
 
class MaxHeap {                                         // A class for Max Heap
	int* harr;                                          // pointer to array of elements in heap 
	int capacity;                                       // maximum possible size of max heap 
	int heap_size;                                      // Current number of elements in max heap 
public: 
	MaxHeap(int a[], int size);                         // Constructor 
	void maxHeapify(int i);                             // To maxHeapify subtree rooted with index i 
	int parent(int i) { return (i - 1) / 2; } 
	int left(int i) { return (2 * i + 1); } 
	int right(int i) { return (2 * i + 2); } 
	int extractMax();                                   // extracts root (maximum) element 
	int getMax() { return harr[0]; }                    // Returns maximum 
	void replaceMax(int x) {                            // to replace root with new node x and heapify() new root 
		harr[0] = x;
		maxHeapify(0);
	} 
};

MaxHeap::MaxHeap(int a[], int size) { 
	heap_size = size; 
	harr = a;                                           // store address of array 
	int i = (heap_size - 1) / 2; 
	while (i >= 0) { 
		maxHeapify(i); 
		i--; 
	} 
} 

int MaxHeap::extractMax() {                             // Method to remove maximum element (or root) from max heap 
	if (heap_size == 0) return INT_MAX;
	int root = harr[0];                                 // Store the maximum vakue.

	if (heap_size > 1) {                                // If there are more than 1 items, move the last item to root and call heapify.
		harr[0] = harr[heap_size - 1]; 
		maxHeapify(0); 
	} 
	heap_size--; 

	return root; 
} 

// A recursive method to heapify a subtree with root at given index 
// This method assumes that the subtrees are already heapified 
void MaxHeap::maxHeapify(int i) { 
	int l = left(i); 
	int r = right(i); 
	int largest = i; 
	if (l < heap_size && harr[l] > harr[i]) largest = l; 
	if (r < heap_size && harr[r] > harr[largest]) largest = r;
	if (largest != i) { 
		swap(&harr[i], &harr[largest]); 
		maxHeapify(largest); 
	}
}

void swap(int* x, int* y) {                             // A utility function to swap two elements 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
} 

int kthSmallest(int arr[], int n, int k) {              // Function to return k'th largest element in a given array 
	MaxHeap mh(arr, k);                                 // Build a heap of first k elements: O(k) time 
	for (int i = k; i < n; i++)                         // Process remaining n-k elements. If current element is smaller than root, replace root with current element 
		if (arr[i] < mh.getMax()) 
			mh.replaceMax(arr[i]); 

	return mh.getMax();                                 // Return root 
} 
 
int main() 
{ 
	int arr[] = { 12, 3, 5, 7, 19 }; 
	int n = sizeof(arr) / sizeof(arr[0]), k = 4; 
	cout << "K'th smallest element is " << kthSmallest(arr, n, k); 
	return 0; 
}

/*** ################# 4 - QuickSelect ################# ***/

#include <climits> 
#include <iostream> 
using namespace std; 

int partition(int arr[], int l, int r); 

// This function returns k'th smallest element in arr[l..r] using QuickSort based method.
// ASSUMPTION: ALL ELEMENTS IN ARR[] ARE DISTINCT 
int kthSmallest(int arr[], int l, int r, int k) { 
	if (k > 0 && k <= r - l + 1) {                                              // If k is smaller than number of elements in array 
		int pos = partition(arr, l, r);                                         // Partition the array around last element and get position of pivot element in sorted array
		if (pos - l == k - 1) return arr[pos];                                  // If position is same as k 
		if (pos - l > k - 1) return kthSmallest(arr, l, pos - 1, k);            // If position is more, recur for left subarray 
		return kthSmallest(arr, pos + 1, r, k - pos + l - 1);                   // Else recur for right subarray
	}
	return INT_MAX;                                                             // If k is more than number of elements in array 
} 

void swap(int* a, int* b) { 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
} 

// Standard partition process of QuickSort(). It considers the last element as pivot and moves all smaller element to left
// of it and greater elements to right 
int partition(int arr[], int l, int r) { 
	int x = arr[r], i = l; 
	for (int j = l; j <= r - 1; j++) { 
		if (arr[j] <= x) { 
			swap(&arr[i], &arr[j]); 
			i++; 
		} 
	} 
	swap(&arr[i], &arr[r]); 
	return i; 
}

int main() 
{ 
	int arr[] = { 12, 3, 5, 7, 4, 19, 26 }; 
	int n = sizeof(arr) / sizeof(arr[0]), k = 3; 
	cout << "K'th smallest element is " << kthSmallest(arr, 0, n - 1, k); 
	return 0; 
} 


/*** ################# 5 - worst case linear time ################# ***/

#include<iostream> 
#include<algorithm> 
#include<climits> 

using namespace std; 

int partition(int arr[], int l, int r, int k); 
// A simple function to find median of arr[]. This is called only for an array of size 5 in this program. 
int findMedian(int arr[], int n) { 
	sort(arr, arr+n);                                               // Sort the array 
	return arr[n/2];                                                // Return middle element 
}
// Returns k'th smallest element in arr[l..r] in worst case linear time.
// ASSUMPTION: ALL ELEMENTS IN ARR[] ARE DISTINCT 
int kthSmallest(int arr[], int l, int r, int k) { 
	if (k > 0 && k <= r - l + 1) {                                  // If k is smaller than number of elements in array 
		int n = r-l+1;                                              // Number of elements in arr[l..r]
		// Divide arr[] in groups of size 5, calculate median of every group and store it in median[] array. 
		int i, median[(n+4)/5];                                     // There will be floor((n+4)/5) groups; 
		for (i=0; i<n/5; i++) median[i] = findMedian(arr+l+i*5, 5); 
		if (i*5 < n) {                                              //For last group with less than 5 elements 
			median[i] = findMedian(arr+l+i*5, n%5); 
			i++; 
		}
		// Find median of all medians using recursive call. If median[] has only one element, then no need of recursive call 
		int medOfMed = (i == 1)? median[i-1]: kthSmallest(median, 0, i-1, i/2); 
		// Partition the array around a random element and get position of pivot element in sorted array 
		int pos = partition(arr, l, r, medOfMed);
		if (pos-l == k-1) return arr[pos];                          // If position is same as k 
		if (pos-l > k-1) return kthSmallest(arr, l, pos-1, k);      // If position is more, recur for left 
		return kthSmallest(arr, pos+1, r, k-pos+l-1);               // Else recur for right subarray
	}
	return INT_MAX;                                                 // If k is more than number of elements in array 
} 

void swap(int *a, int *b) { 
	int temp = *a; 
	*a = *b;
	*b = temp;
}

int partition(int arr[], int l, int r, int x) {                     // It searches for x in arr[l..r], and partitions the array around x. 
	int i;                                                          // Search for x in arr[l..r] and move it to end 
	for (i=l; i<r; i++) 
		if (arr[i] == x) break; 
	swap(&arr[i], &arr[r]); 

	i = l;                                                          // Standard partition algorithm 
	for (int j = l; j <= r - 1; j++) { 
		if (arr[j] <= x) { 
			swap(&arr[i], &arr[j]); 
			i++; 
		} 
	} 
	swap(&arr[i], &arr[r]); 
	return i; 
} 

int main() 
{ 
	int arr[] = {12, 3, 5, 7, 4, 19, 26}; 
	int n = sizeof(arr)/sizeof(arr[0]), k = 3; 
	cout << "K'th smallest element is " << kthSmallest(arr, 0, n-1, k); 
	return 0; 
} 
