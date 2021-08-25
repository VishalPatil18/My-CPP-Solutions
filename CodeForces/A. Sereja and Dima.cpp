// https://codeforces.com/contest/381/problem/A
#include<bits/stdc++.h>
using namespace std;

// My Predefined Macros and functions
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define endl "\n"

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);    

    int n;
    cin >> n;
    vector<int> cards(n);

    for(int i=0; i<n; cin >> cards[i++]);

    int s = 0, d = 0;
    int i = 0, j = n-1;
    
    int x = 1;
    while(i <= j){
        if(x % 2) s += (cards[i] > cards[j]) ? cards[i++] : cards[j--];
        else d += (cards[i] > cards[j]) ? cards[i++] : cards[j--];
        x++;
    }
    cout << s << " " << d << endl;

    return 0;
}
