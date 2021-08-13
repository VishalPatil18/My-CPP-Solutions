// https://codeforces.com/contest/263/problem/A
#include<bits/stdc++.h>
using namespace std;

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int x, y;
    int mat[5][5];
    for(int i=0; i<5; ++i)
        for(int j=0; j<5; ++j){
            cin >> mat[i][j];
            if(mat[i][j] == 1) x = i, y = j;
        }

    int ans = abs(x - 2) + abs(y - 2);

    cout << ans << endl;

    return 0;
}
