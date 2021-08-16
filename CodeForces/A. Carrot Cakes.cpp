// 
#include<bits/stdc++.h>
using namespace std;

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    double n, t, k, d;
    cin >> n >> t >> k >> d;

    double x = (n/k) * t;
    double y;
    if(t < d) y = d + ((n - (d/t*k))/(2 * k) * t); 
    else y = (d + (n/(2 * k) * t));

    // cout << x << " " << y << endl;

    if(y < x) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
