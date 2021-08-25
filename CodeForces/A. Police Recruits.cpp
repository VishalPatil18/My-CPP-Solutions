// https://codeforces.com/contest/427/problem/A
#include<bits/stdc++.h>
using namespace std;

// My Predefined Macros and functions
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define endl "\n"

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);    

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; cin >> arr[i++]);

    int ans = 0, police = 0;
    for(int i=0; i<n; ++i){
        if(arr[i] == -1 && police <= 0) ans++;
        else if(arr[i] == -1 && police>0) police--;
        else if(arr[i] > 0) police += arr[i];
    }

    cout << ans << endl;
    
    return 0;
}
