// https://codeforces.com/contest/59/problem/A
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

    string s;
    cin >> s;

    int lower = 0, upper = 0;
    for(char x : s){
        if(x <= 'z' && x >= 'a') lower++;
        else upper++;
    }

    if(lower >= upper) transform(s.begin(), s.end(), s.begin(), ::tolower);
    else transform(s.begin(), s.end(), s.begin(), ::toupper);

    for(char x : s) cout << x;
    cout << endl;

    return 0;
}
