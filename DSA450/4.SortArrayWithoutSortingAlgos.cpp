/*** ################# 1 - My Solution ################# ***/
// time complexity - O(n) & space complexity - O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	vector<vector<int>> ans;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i=0; i<n; i++) cin >> arr[i];
	    
	    int count_zero = 0, count_one = 0, count_two = 0;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i] == 0) count_zero++;
	        else if(arr[i] == 1) count_one++;
	        else if(arr[i] == 2) count_two++;
	    }
	    
	    vector<int> sub_ans(count_zero, 0);
	    sub_ans.insert(sub_ans.end(), count_one, 1);
	    sub_ans.insert(sub_ans.end(), count_two, 2);
	    ans.push_back(sub_ans);
	}
	
	for(vector<int> x: ans) {
	    for(int y: x) cout << y << " ";
	    cout << endl;
	}
	
	return 0;
}

/*** ################# 2 - In a Single Pass ################# ***/

// time complexity: O(n) & space complexity O(1)
#include <bits/stdc++.h> 
using namespace std; 

void sort012(int a[], int arr_size) { 					// Function to sort the input array, the array is assumed to have values in {0, 1, 2} 
	int lo = 0; 
	int hi = arr_size - 1; 
	int mid = 0; 

	while (mid <= hi) { 								// Iterate till all the elements are sorted 
		switch(a[mid]) {		
			case 0: 									// If the element is 0 
				swap(a[lo++], a[mid++]); 
				break; 

			case 1: 									// If the element is 1 . 
				mid++; 
				break;

			case 2: 									// If the element is 2 
				swap(a[mid], a[hi--]); 					// here we don't increment mid as we don't know the incoming element from the high position
				break; 
		} 
	} 
} 

void printArray(int arr[], int arr_size) { 				// Function to print array arr[]  
	for(int i = 0; i < arr_size; i++) cout << arr[i] << " "; 
} 

int main() 
{ 
	int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	sort012(arr, n); 

	cout << "array after segregation "; 

	printArray(arr, n); 

	return 0; 
}


