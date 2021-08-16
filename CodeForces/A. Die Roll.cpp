// https://codeforces.com/contest/9/problem/A
#include<bits/stdc++.h>
using namespace std;

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    int maxx = max(a, b);
    int ans = (6 - (maxx - 1));
    if(ans == 3) cout << 1 << "/" << 2 << endl;
    else if(ans == 6) cout << 1 << "/" << 1 << endl;
    else if(ans == 2) cout << 1 << "/" << 3 << endl;
    else if(ans == 4) cout << 2 << "/" << 3 << endl;
    else cout << ans << "/" << 6 << endl;
    
    return 0;
}
