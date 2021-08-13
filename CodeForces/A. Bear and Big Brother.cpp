// https://codeforces.com/contest/791/problem/A

// Brute Force
#include<bits/stdc++.h>
using namespace std;

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    int ans = 0;

    while(a <= b){
        a *= 3;
        b *= 2;
        ans++;
    }

    cout << ans << endl;

    return 0;
}

// Optimal Approach