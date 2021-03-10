/*
    https://www.codechef.com/MARCH21C/problems/CONSADD
*/

#include<bits/stdc++.h>
using namespace std;

// My Predefined Macros and functions
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define all(x) x.begin(), x.end()
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define all_test_cases int t; scanf("%d", &t); while (t--)

int max(int x, int y) { return (x > y) ? x : y; }
int min(int x, int y) { return (x < y) ? x : y; }

/*** Solution Starts from here ***/

// Global vector to store final ans
vector<int> ans;

void SOLVE(){
    int r, c, x;

    cin >> r >> c >> x;

    int a[r][c], b[r][c];

    for(int i=0; i<r; ++i)
        for(int j=0; j<c; cin >> a[i][j++]);

    for(int i=0; i<r; ++i)
        for(int j=0; j<c; cin >> b[i][j++]);

    int sum_a = 0, sum_b = 0;
    for(int i=0; i<r; i++)
        for(int j=0; j<c; sum_a += a[i][j++]);

    for(int i=0; i<r; i++)
        for(int j=0; j<c; sum_b += b[i][j++]);
    
    if((sum_a % 2) != (sum_b % 2)) ans.push_back(0);
    else {
        for(int i=0; i<r; ++i) {
            for(int j=0; j<c; ++j) {
                if(a[i][j] != b[i][j]) {
                    int diff = b[i][j] - a[i][j];
                    if(c - j >= x) {
                        for(int k = 0; k<x; ++k) a[i][k] += diff;
                    }
                    else if(r - i >= x) {
                        for(int k = 0; k<x; ++k) a[k][j] += diff;
                    }
                }
            }
        }
 
        bool temp_ans = true;
        for(int i=0; (i<r) && temp_ans; ++i)
            for(int j=0; (j<c) && temp_ans; ++j)
                if(a[i][j] != b[i][j])
                    temp_ans = false;

        if(temp_ans == 0) ans.push_back(0);
        else ans.push_back(1);
    }
}
    
int main()
{   
    all_test_cases SOLVE();

    for(int x: ans) cout << ((x == 0) ? "No" : "Yes") << "\n";

    return 0;
}