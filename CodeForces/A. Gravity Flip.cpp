// https://codeforces.com/contest/405/problem/A
#include<bits/stdc++.h>
using namespace std;

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i) cin >> arr[i];

    sort(arr, arr+n);

    for(int i=0; i<n; ++i) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
