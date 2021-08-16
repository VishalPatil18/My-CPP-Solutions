// https://codeforces.com/contest/709/problem/A
#include<bits/stdc++.h>
using namespace std;

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, b, d;
    cin >> n >> b >> d;
    int size[n];
    for(int i=0; i<n; cin >> size[i++]);

    int ans = 0;
    int totalSize = 0;
    for(int i=0; i<n; ++i){
        if(size[i] <= b) totalSize += size[i];
        if(totalSize > d) ans++, totalSize = 0;
    }
    cout << ans << endl;
    
    return 0;
}
