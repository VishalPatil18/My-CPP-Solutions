// https://codeforces.com/contest/231/problem/A

#include<bits/stdc++.h>
using namespace std;

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    int mat[n][3];
    for(int i=0; i<n; ++i) cin >> mat[i][0] >> mat[i][1] >> mat[i][2];

    int ans = 0;
    for(int i=0; i<n; ++i){
        if(mat[i][0] + mat[i][1] + mat[i][2] >= 2) ans++;
    }
    
    cout << ans << endl;

    return 0;
}
