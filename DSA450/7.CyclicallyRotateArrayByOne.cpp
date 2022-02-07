/*** ################# 1 - My Solution ################# ***/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    vector<vector<int>> ans;
    
    while(t--) {
        int n; cin >> n;
        vector<int> a;
        
        for(int i=0; i<n; i++){
            int x; cin >> x;
            a.push_back(x);
        }
        
        if(n > 1){
            int prev = a[0], curr = a[1], last = a[n-1];
            for(int i=1; i<n; i++){
                a[i] = prev;
                prev = curr;
                if(i < n-1) curr = a[i+1];
            }
            a[0] = curr;
        }
        ans.push_back(a);
    }
    
    for(vector<int> x: ans){
        for(int y: x) cout << y << " ";
        cout << endl;
    }
       
	return 0;
}

/*** ################# 2nd Solution ################# ***/

# include <iostream>
using namespace std;

void rotate(int arr[], int n) {
    int x = arr[n - 1], i;
    for (i = n - 1; i > 0; i--)
    arr[i] = arr[i - 1]; 
    arr[0] = x;
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    for (i = 0; i < n; i++) cout << arr[i];

    rotate(arr, n);

    cout << "\nRotated array is\n";
    for (i = 0; i < n; i++) cout << arr[i];

    return 0;
}

/*** ################# 3rd Solution ################# ***/

#include<iostream>
using namespace std;

int main()
{
    string problemSolver="Vaibhav Dwivedi";

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; cin >> a[i++]);

        int temp = a[n-1];
        int i=0;
        for(i=n-1; i>0; i--) a[i] = a[i-1];
        a[i] = temp;

        for(int i: a) cout << i << " ";
        cout << "\n";
    }

    return 0;
}