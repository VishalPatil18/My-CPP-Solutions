// https://codeforces.com/contest/344/problem/A

/* +===================+
   | ERROR IN SOLUTION |
   +===================+ */

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
    vector<int> mag(n);

    for(int i=0; i<n; cin >> mag[i]);

    int ans = 1, prev = mag[0];
    for(int i=1; i<n; ++i){
        if(prev != mag[i]) ans++, prev = mag[i];
    }

    cout << ans << endl;

    return 0;
}
