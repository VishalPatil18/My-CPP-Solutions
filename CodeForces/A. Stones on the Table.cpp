// https://codeforces.com/contest/266/problem/A
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
    string s;
    cin >> s;
 
    char prev = s[0];
    int ans = 0;
    for(int i=1; i<n; ++i){
        if(s[i] == prev) ans++;
        prev = s[i];
    }
 
    cout << ans << endl;
    
    return 0;
}