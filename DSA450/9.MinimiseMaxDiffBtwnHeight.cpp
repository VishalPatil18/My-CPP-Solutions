/*** ################# 1 Solution ################# ***/
// Time Complexity - O(nlogn)

#include <bits/stdc++.h> 
using namespace std;

int getMinDiff(int arr[], int n, int k) {
    if (n == 1) return 0;

    sort(arr, arr+n);                                       // Sort all elements
    int ans = arr[n-1] - arr[0];                            // Initialize result
    int small = arr[0] + k;                                 // Handle corner elements
    int big = arr[n-1] - k;
    if (small > big) swap(small, big);
    
    for(int i = 1; i < n-1; i ++) {                         // Traverse middle elements
        int subtract = arr[i] - k;
        int add = arr[i] + k;
        if (subtract >= small || add <= big) continue;      // If both subtraction and addition do not change diff

        // Either subtraction causes a smaller number or addition causes a greater number.
        // Update small or big using greedy approach (If big - subtract causes smaller diff, update small Else update big)
        if (big - subtract <= add - small) small = subtract;
        else big = add;
    }

    return min(ans, big - small);
}

int main() 
{
    os_base::sync_with_stdio(false); cin.tie(NULL);
    int arr[] = {4, 6}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int k = 10; 
    cout << "\nMaximum difference is " << getMinDiff(arr, n, k); 
    return 0; 
}