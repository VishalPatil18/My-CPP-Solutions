/*
    https://www.codechef.com/MARCH21C/problems/NOTIME/
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, h, x;
    cin >> n >> h >> x ;

    int timezones[n];

    for(int i=0; i<n; cin >> timezones[i++]);

    int hrsneeded = h - x;
    
    if(hrsneeded <= 0) cout << "YES\n";
    else {
        for(int i=0; i<n; i++) {
            if(timezones[i] >= hrsneeded){
                cout << "YES\n";
                return 0;
            }
        }
        cout << "NO\n";
    }
    
    return 0;
}