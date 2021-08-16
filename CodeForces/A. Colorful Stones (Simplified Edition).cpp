// https://codeforces.com/contest/265/problem/A
#include<bits/stdc++.h>
using namespace std;

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s, t;
    cin >> s >> t;

    int ans = 1;
    for(char x : t) if(x == s[ans - 1]) ans++;

    cout << ans << endl;
    
    return 0;
}
