// https://codeforces.com/contest/294/problem/A
#include<bits/stdc++.h>
using namespace std;

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n;
    int birds[n];
    for(int i=0; i<n; cin >> birds[i++]);

    cin >> m;
    int arr[m][2];
    for(int i=0; i<m; cin >> arr[i][0] >> arr[i++][1]);

    for(int i=0; i<m; ++i){
        int wire = arr[i][0] - 1;
        int pos = arr[i][1];

        if(wire > 0) birds[wire - 1] += pos - 1;
        if(wire < n-1) birds[wire + 1] += (birds[wire] - pos);
        birds[wire] = 0;
    }
    for(int i=0; i<n; ++i) cout << birds[i] << endl;
    
    return 0;
}
