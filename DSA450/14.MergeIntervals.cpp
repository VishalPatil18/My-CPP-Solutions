/*** ################# 1 - My Solution ################# ***/

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

int main()
{
    all_test_cases {
        int n;
        cin >> n;
        
        pair<int, int> p[n];
        for(auto &i : p) cin >> i.first >> i.second;
        
        sort(p, p+n);
        
        vector<pair<int, int>> ans;
        ans.push_back(p[0]);
        
        for(int i = 1 ; i < n ; i++){
            if(ans.back().second >= p[i].first) ans.back().second = max(p[i].second, ans.back().second);
            else ans.push_back(p[i]) ;
        }
        
        for(auto i : ans) cout << i.first << " " << i.second << " ";
        cout << '\n' ;
    }
    return 0;
}

/*** ################# 2nd Solution ################# ***/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    all_test_cases {
        int n, i, j;
        cin >> n;
        int x[n], y[n];
        
        for(i=0; i<n; i++) {
            cin >> x[i];
            cin >> y[i];
        }
        
        sort(x, x+n);
        sort(y, y+n);
        vector<int> v;
        j=0; i=0;
        v.push_back(x[i]);
        for(i=1; i<n; i++) {
            if(y[j] < x[i]) {
                v.push_back(y[j]);
                v.push_back(x[i]);
            }
            j++;
        }
        v.push_back(y[n-1]);
    
        for(i=0; i < v.size(); i++) cout << v[i] << " ";
        cout << endl;
    }

    return 0;
}

/*** ################# 2nd Solution ################# ***/
// Time complexity - O(n Log n) and O(1) Extra Space

#include<bits/stdc++.h>
using namespace std;

struct Interval {                   
	int start, end;                                 // An interval has start time and end time
};

bool compareInterval(Interval i1, Interval i2) {    // Compares two intervals according to their staring time.
	return (i1.start < i2.start);
}

// The main function that takes a set of intervals, merge overlapping intervals and prints the result
void mergeIntervals(Interval arr[], int n) {
	if (n <= 0) return;                             // Test if the given set has at least one interval
	stack<Interval> s;                              // Create an empty stack of intervals
	
	sort(arr, arr+n, compareInterval);              // sort the intervals in increasing order of start time
	s.push(arr[0]);                                 // push the first interval to stack
	
	for (int i = 1 ; i < n; i++) {                  // Start from the next interval and merge if necessary
		Interval top = s.top();                     // get interval from stack top
		if (top.end < arr[i].start) s.push(arr[i]); // if current interval is not overlapping with stack top, push it to the stack
		else if (top.end < arr[i].end) {            // Otherwise update the ending time of top if ending of current interval is more
			top.end = arr[i].end;
			s.pop();
			s.push(top);
		}
	}
	// Print contents of stack
	cout << "\n The Merged Intervals are: ";
	while (!s.empty()) {
		Interval t = s.top();
		cout << t.start << " " << t.end << ", ";
		s.pop();
	}
	return;
}

int main()
{
	Interval arr[] = { {6,8}, {1,9}, {2,4}, {4,7} };
	int n = sizeof(arr)/sizeof(arr[0]);
	mergeIntervals(arr, n);
	return 0;
}

/*** ################# 3rd Solution ################# ***/
// Time complexity - O(n Log n) and O(1) Extra Space

#include<bits/stdc++.h> 
using namespace std; 

struct Interval { 
	int s, e; 
};

bool compare(Interval a, Interval b){ return a.s < b.s; } 

void mergeIntervals(Interval arr[], int n) { 
	sort(arr, arr+n, compare);                          // Sort Intervals in increasing order of start time
	int index = 0;                                      // Stores index of last element in output array (modified arr[]) 

	for(int i=1; i<n; i++) {
		if(arr[index].e >= arr[i].s) {                  // If this is not first Interval and overlaps with the previous one
			arr[index].e = max(arr[index].e, arr[i].e); // Merge previous and current Intervals
			arr[index].s = min(arr[index].s, arr[i].s); 
		} 
		else {
			index++;
			arr[index] = arr[i]; 
		} 
	} 
	cout << "\n The Merged Intervals are: ";            // Now arr[0..index-1] stores the merged Intervals 
	for (int i = 0; i <= index; i++) cout << "[" << arr[i].s << ", " << arr[i].e << "] "; 
} 

int main() 
{ 
	Interval arr[] = { {6,8}, {1,9}, {2,4}, {4,7} }; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	mergeIntervals(arr, n); 
	return 0; 
} 
