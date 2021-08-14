// https://codeforces.com/contest/112/problem/A
#include<bits/stdc++.h>
using namespace std;

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);

    if(a < b) cout << -1 << endl;
    else if(a > b) cout << 1 << endl;
    else cout << 0 << endl;
    
    return 0;
}
