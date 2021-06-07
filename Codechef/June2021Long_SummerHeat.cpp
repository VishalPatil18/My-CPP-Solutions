/*
    https://www.codechef.com/JUNE21C/problems/COCONUT
*/

#include<bits/stdc++.h>
using namespace std;

// My Predefined Macros and functions
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define all(x) x.begin(), x.end()
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define mod (int) 998244353
#define MOD (int) 1e9+7
#define X 1001100011100001111ll
#define all_test_cases int t; scanf("%d", &t); while (t--)
#define endl "\n"

int max(int x, int y) { return (x > y) ? x : y; }
int min(int x, int y) { return (x < y) ? x : y; }

/*** Solution Starts from here ***/
// Global vector to store final ans
vector<int> ans;

void SOLVE(){
    int xa, xb, Xa, Xb;
    cin >> xa >> xb >> Xa >> Xb;

    int water = (Xa%xa == 0) ? Xa/xa : (Xa/xa) + 1;
    int pulp = (Xb%xb == 0) ? Xb/xb : (Xb/xb) + 1;

    ans.push_back(water+pulp);
}

int main()
{   
    all_test_cases SOLVE();

    for(int x: ans) cout << x << endl;

    return 0;
}