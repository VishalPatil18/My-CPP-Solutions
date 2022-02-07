/*** ################# 1 - My Solution ################# ***/

// Time complexity - O(n), space complexity - O(1)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = 9;
    
    int high = n-1, low = 0;
    
    while(low < high){
        if(arr[low] < 0 && arr[high] > 0) { low++; high--; }
        else if(arr[low] > 0 && arr[high] < 0) swap(arr[low++], arr[high--]);
        else if(arr[low] > 0 && arr[high] > 0) high--;
        else if(arr[low] < 0 && arr[high] < 0) low++;
    }
    
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    
	return 0;
}

/*** ################# 2 - Partition process of quicksort ################# ***/

// Time complexity - O(n), space complexity - O(1)
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n) {
	int j = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] < 0) {
			if (i != j) swap(arr[i], arr[j]);
			j++;
		}
	}
}

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
}

int main()
{
	int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	rearrange(arr, n);
	printArray(arr, n);
	return 0;
}


