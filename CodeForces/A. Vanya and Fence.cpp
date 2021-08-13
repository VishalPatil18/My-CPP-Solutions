// https://codeforces.com/contest/677/problem/A
#include<bits/stdc++.h>
using namespace std;

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, h;
    cin >> n >> h;
    
    int ht[n];
    for(int i=0; i<n; cin >> ht[i++]);

    int ans = 0;
    for(int i=0; i<n; ++i){
        if(ht[i] > h) ans += 2;
        else ans++;
    }

    cout << ans << endl;

    return 0;
}