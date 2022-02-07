/*** ################# 1 - My Solution ################# ***/

// Inversion Count : For an array, inversion count indicates how far (or close) the array is from being sorted.
// If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum. 
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

// my solution gives segmentation fault...
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
vector<long long int> ans; // Global vector to store final ans

void SOLVE() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; scanf("%d ", &a[i++]));
    
    int occured[10000001] = {0};
    long long int inversion_count = 0;

    for(int i=0; i<n; i++) {
        for(int j=1; j<a[i]; j++)
            if(occured[j] == 0) inversion_count++;
        occured[a[i]] = 1;
    }
    ans.push_back(inversion_count);
}

int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    all_test_cases SOLVE();

    for(long long int x: ans) cout << x << endl;

    return 0;
}

/*** ################# 2nd Solution - Merge sort ################# ***/
// time complexity - O(n(log(n)))

#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &target,vector<int> &a,vector<int> &b) {
    int n = a.size();
    int m = b.size();
    int inversionCount = 0;
    int i = 0, j = 0, k = 0;
    while(i<n && j<m) {
        if(a[i] <= b[j]) {
            target[k] = a[i];               // No inversion
            i++; k++;
        }
        else {
            inversionCount += n-i;          // Inversions from i to n-1
            target[k] = b[j];
            j++; k++;
        } 
    }
    while(i<n) {
        target[k] = a[i];
        i++; k++;
    }
    while(j<m) {
        target[k] = b[j];
        j++; k++;
    }
    return inversionCount;
}
int mergeSort(vector<int> &v) {
    int n=v.size();
    if(n==1) return 0;

    int mid=(n-1)/2;                            // Divide into 2 parts 
    
    vector<int> left;                           // Left part-> [0.....mid]
    for(int i=0;i<=mid;i++) left.push_back(v[i]);
    
    vector<int> right;                          // Right part-> [mid+1 .... n-1]
    for(int i=mid+1;i<=n-1;i++) right.push_back(v[i]);
    
    int leftPartInversions = mergeSort(left);   // Sort these 2 arrays
    int rightPartInversions = mergeSort(right);
    int mergeInversions = merge(v, left, right);// Merge these 2 arrays
    
    return leftPartInversions + rightPartInversions + mergeInversions;
}

int main()
{
    all_test_cases {
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; cin >> v[i++]);

        cout << mergeSort(v) << endl;
    }

    return 0;
}

/*** ################# 3rd Solution ################# ***/

#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int start, int mid, int end) {
    int count = 0, i = start, j = mid;
    int temp[end-start];
    int y = start;
    while(i <= mid-1 && j < end) {
        if(arr[i] <= arr[j]) {
            temp[y++] = arr[i];
            ++i;
        }
        else {
            temp[y++] = arr[j];
            count += (mid-i);
            ++j;
        }
    }
    while(i<=mid-1) temp[y++]=arr[i++];
    while(j<end) temp[y++]=arr[j++];

    for(int h=start;h<end;++h) arr[h]=temp[h];

    return count;
}

int mergecount(int arr[], int i, int j) {
    int mid, count = 0;
    if(i<j) {
        mid = (i+j)/2;
        mergecount(arr, i, mid);
        count += mergecount(arr, mid+1, j);
        count += merge(arr, i, mid, j);
    }
    return count;
}

int main()
{
	all_test_cases {
        int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;cin>>arr[i++]);

	    cout << mergecount(arr, 0, n);
	    cout << endl;
	}

	return 0;
}