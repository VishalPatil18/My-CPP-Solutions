/*** ######################## 1 - My Solution ########################### ***/
// Time Complexity : O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    vector<string> ans;
    
    while(t--){
        string s;
        cin >> s;
        int mid = s.size()/2;               // defining mid to only iterate over half of the array
        for(int i=0; i<mid; i++){
            char temp = s[i];               // swapping the two chars
            s[i] = s[s.size()-i-1];
            s[s.size()-i-1] = temp;
        }
        ans.push_back(s);
    }
    
    for(string x : ans)
        cout << x << "\n";
    
	return 0;
}

/*** ############### 2 - Iterative C++ program to reverse an array ############### ***/
// Time Complexity : O(n)

#include <bits/stdc++.h>
using namespace std;
 
/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
}     
 
/* Utility function to print an array */
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    
    cout << endl;
} 
 
/* Driver function to test above functions */
int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); 

    printArray(arr, n);                                 // To print original array
    rvereseArray(arr, 0, n-1);                          // Function calling
    cout << "Reversed array is" << endl;
    printArray(arr, n);                                 // To print the Reversed array
    
    return 0;
}

/*** ############ 3 - Recursive C++ program to reverse an array ############# ***/
// Time Complexity : O(n)

#include <bits/stdc++.h>
using namespace std;
 
/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end) {
    if (start >= end)
    return;
    
    int temp = arr[start]; 
    arr[start] = arr[end];
    arr[end] = temp;

    rvereseArray(arr, start + 1, end - 1);              // Recursive Function calling
}     

/* Utility function to print an array */
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
 
    cout << endl;
} 
 
/* Driver function to test above functions */
int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    
    printArray(arr, 6);                                 // To print original array
    rvereseArray(arr, 0, 5);                            // Function calling
    cout << "Reversed array is" << endl;
    printArray(arr, 6);                                 // To print the Reversed array
    
    return 0;
}

