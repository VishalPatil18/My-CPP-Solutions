/*
    https://www.codechef.com/MARCH21C/problems/SPACEARR
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
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; cin >> arr[i++]);

    int count_arr[n+1] = {0};

    for(int i=0; i<n; ++i) count_arr[arr[i]]++;

    int count = 0;
    
    for(int i=0; i<n; ++i) {
        if(arr[i] < i+1) count++;
    }

    bool temp_ans = true;
    
    for(int i=1; i<n+1; ++i) {
        if(count_arr[i] > (n-i+1)) temp_ans = false;
    }
    
    ans.push_back((temp_ans && (count%2 == 0)) ? 1 : 0);
}
    
int main()
{   
    all_test_cases SOLVE();

    for(int x: ans) cout << ((x == 0) ? "First" : "Second") << "\n";

    return 0;
}