/*
    https://www.codechef.com/MARCH21C/problems/PAPARAZI
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
    int n, temp_ans1 = 1, temp_ans2 = 1;

    cin >> n;

    long long int arr[n];

    for(int i=0; i<n; cin >> arr[i++]);

    for(int i=0; i<n-1; ++i) {
        // deb(i);
        int j = i+1, count = 1;
        while(j < n) {
            if(arr[j] > arr[i] + 1) break;
            else if(arr[j] == arr[i] + 1) count++;
            else count++;
            // deb2(count, j);
            j++;
        }
        if(j == n) continue;
        temp_ans1 = max(temp_ans1, count);
    }

    for(int i=n-1; i>0; --i) {
        // deb(i);
        int j = i-1, count = 1;
        while(j >= 0) {
            if(arr[j] > arr[i] - 1) break;
            else if(arr[j] == arr[i] + 1) count++;
            else count++;
            // deb2(count, j);
            j--;
        }
        if(j == -1) continue;
        temp_ans2 = max(temp_ans2, count);
    }

    int temp_ans = max(temp_ans1, temp_ans2);
    
    ans.push_back(temp_ans);
}
    
int main()
{   
    all_test_cases SOLVE();

    for(int x: ans) cout << x << "\n";

    return 0;
}