/*** ################# 1 Solution ################# ***/

#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

void steps(int a[], int n) { 
    int dp[n];
    dp[0] = 0;

    for(int i=1; i<n; i++) {
        dp[i]=10000;
        for(int j=0; j<i; j++)
            if(j+a[j] >= i) dp[i]=min(dp[i],dp[j]+1);
    }

    if(dp[n-1] == 10000) ans.push_back(-1);
    else ans.push_back(dp[n-1]);
}

int main()
{
    int t; cin >> t;

    while(t--) { 
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; cin >> a[i++]);

        steps(a, n);   
    }

    for(int x: ans) cout << x << endl;

    return 0;
}

/*** ################# 2nd Solution ################# ***/

#include <iostream>
using namespace std;

int minNumberOfJumps(int n,int *a) {
    if(a[0] == 0) return -1;
    else if(a[0] >= n-1) return 1;
    else {
        int m = a[0];
        int i = 0, jumps = 1;
        while(m != 0) {
            if(i+m >= n-1) return jumps;
            else {
                int t = m;
                int max = 0,ele,k;
                while(t--) {
                    i++;
                    if(max<=i+a[i]) {
                        max=i+a[i];
                        ele=a[i];
                        k=i;
                    }
                }
                i = k;
                m = ele;
            }
            jumps++;
        }
        return -1;
    }
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];

	    cout << minNumberOfJumps(n,a) << endl;
	}

	return 0;
}

/*** ################# 3rd Solution ################# ***/

#include <bits/stdc++.h>
using namespace std;

#define mod (int) 998244353
#define MOD (int) 1e9+7
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define t int t; cin >> t; while (t--)
#define int long long
#define ll long long
#define float long double
#define pb emplace_back
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define in(x) scanf("%d", &x)
#define rr return 0
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define ini(a, i) memset(a, i, sizeof(a))
#define vi vector<int>
#define fi first
#define se second
#define endl "\n"
#define ii pair<int, int>
#define vii vector<ii>
#define sz(s) s.size()
#define bits(n) __builtin_popcount(n)
#define mx *max_element
#define mn *min_element
const int MAXN = (int)((1e5) + 100);
int gcd(int a,int b){   if(b==0)return a;else return gcd(b,a%b);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
void pr(int x) {cout << x;}
void prl(int x) {cout << x << endl;}
const int N =  (int)(1 * 1e6 + 10);
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    t {
        //GREEDY APPROACH
        ll n;
        cin >> n;
        ll a[n];
        for0(i,n) cin>>a[i];
        ll count = 0;
        ll i = 0, j = 0;
        while(i <= n-1 and j <= n-1){
            ll maxs=INT_MIN;
            ll w=i;
            for(j=w+1;j<n and j<=w+a[w];j++) {
                if(a[j]+j>maxs) {
                    i=j;
                    maxs=a[j];
                }
            }
            count++;
        //   if(j==n-1)
        //   break;
        }

        prl(count);
    }
}

/*** ################# 4th Using Recurrsion ################# ***/
// Time complexity: O(n^n) & space complexity - O(1)

#include <bits/stdc++.h> 
using namespace std; 

// Function to return the minimum number of jumps to reach arr[h] from arr[l] 
int minJumps(int arr[], int n) {
	if (n == 1) return 0;                               // Base case: when source and destination are same 

	int res = INT_MAX;
	for (int i = n - 2; i >= 0; i--) {                  // Traverse through all the points reachable from 
		if (i + arr[i] >= n - 1) {                      // arr[l] Recursively, get the minimum number 
			int sub_res = minJumps(arr, i + 1);         // of jumps needed to reach arr[h] from these reachable points
			if (sub_res != INT_MAX) res = min(res, sub_res + 1); 
		} 
	}
	return res; 
} 
 
int main() 
{ 
	int arr[] = { 1, 3, 6, 3, 2, 3, 6, 8, 9, 5 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Minimum number of jumps to reach the end is: " << minJumps(arr, n); 
	return 0; 
} 


/*** ################# 5th - Dynamic Programming ################# ***/
// Time Complexity: O(n^2)

#include <bits/stdc++.h> 
using namespace std; 

int min(int x, int y) { return (x < y) ? x : y; } 

int minJumps(int arr[], int n) {                                // Returns minimum number of jumps to reach arr[n-1] from arr[0] 
	int* jumps = new int[n];                                    // jumps[n-1] will hold the result 
	int i, j;

	if (n == 0 || arr[0] == 0) return INT_MAX; 
	jumps[0] = 0; 

	for (i = 1; i < n; i++) {                                   // Find the minimum number of jumps to reach arr[i] from arr[0], and assign this value to jumps[i] 
		jumps[i] = INT_MAX; 
		for (j = 0; j < i; j++) { 
			if (i <= j + arr[j] && jumps[j] != INT_MAX) { 
				jumps[i] = min(jumps[i], jumps[j] + 1); 
				break; 
			} 
		} 
	} 
	return jumps[n - 1]; 
} 

int main() 
{ 
	int arr[] = { 1, 3, 6, 1, 0, 9 }; 
	int size = sizeof(arr) / sizeof(int); 
	cout << "Minimum number of jumps to reach end is " << minJumps(arr, size); 
	return 0; 
}

/*** ################# 6th - Dynamic Programming ################# ***/
// Time Complexity: O(n^2) & Auxiliary Space:O(n)

#include <bits/stdc++.h> 
using namespace std; 

int minJumps(int arr[], int n) { 
    int* jumps = new int[n];                                    // jumps[0] will hold the result
    int min;
    
    // Minimum number of jumps needed to reach last element from last elements itself is always 0 
    jumps[n - 1] = 0;                                           
    
    // Start from the second element, move from right to left and construct the jumps[] array where 
    // jumps[i] represents minimum number of jumps needed to reach arr[m-1] from arr[i] 
    for (int i = n - 2; i >= 0; i--) { 
        // If arr[i] is 0 then arr[n-1] can't be reached from here 
        if (arr[i] == 0) jumps[i] = INT_MAX; 
        // If we can direcly reach to the end point from here then jumps[i] is 1 
        else if (arr[i] >= n - i - 1) jumps[i] = 1; 
        // Otherwise, to find out the minimum number of jumps needed to reach 
        // arr[n-1], check all the points reachable from here and jumps[] value for those points 
        else {
            min = INT_MAX;

            // following loop checks with all reachable points and takes the minimum 
            for (int j = i + 1; j < n && j <= arr[i] + i; j++) 
                if (min > jumps[j]) min = jumps[j];
  
            // Handle overflow
            if (min != INT_MAX) jumps[i] = min + 1; 
            else jumps[i] = min;                                // or INT_MAX 
        } 
    }
    return jumps[0]; 
} 

int main() 
{ 
    int arr[] = { 1, 3, 6, 1, 0, 9 }; 
    int size = sizeof(arr) / sizeof(int); 
    cout << "Minimum number of jumps to reach end is " << minJumps(arr, size); 
    return 0; 
}

/*** ################# 7th - Best optimised solution ################# ***/
// Time complexity: O(n) & Auxiliary Space: O(1)

#include <bits/stdc++.h> 
using namespace std; 

int max(int x, int y) { return (x > y) ? x : y; } 

int minJumps(int arr[], int n) { 
	// The number of jumps needed to reach the starting index is 0 
	if (n <= 1) return 0; 
	// Return -1 if not possible to jump 
	if (arr[0] == 0) return -1; 

	// initialization stores all time the maximal reachable index in the array. 
	int maxReach = arr[0]; 
	// stores the number of steps we can still take 
	int step = arr[0]; 
	// stores the number of jumps necessary to reach that maximal reachable position. 
	int jump = 1; 
 
	for (int i = 1; i < n; i++) { 
		// Check if we have reached the end of the array 
		if (i == n - 1) return jump; 
		// updating maxReach 
		maxReach = max(maxReach, i + arr[i]); 
		// we use a step to get to the current index 
		step--; 
		// If no further steps left 
		if (step == 0) { 
			// we must have used a jump 
			jump++; 
			// Check if the current index/position or lesser index is the maximum reach point from the previous indexes 
			if (i >= maxReach) return -1; 
			// re-initialize the steps to the amount of steps to reach maxReach from position i. 
			step = maxReach - i; 
		} 
	} 
	return -1; 
} 

int main() 
{ 
	int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 }; 
	int size = sizeof(arr) / sizeof(int);  
	cout << "Minimum number of jumps to reach end is %d " << minJumps(arr, size); 
    return 0; 
}
