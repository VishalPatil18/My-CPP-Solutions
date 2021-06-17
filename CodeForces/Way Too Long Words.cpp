// https://codeforces.com/problemset/problem/71/A

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin >> n;

    string arr[n];
    for(int i=0; i<n; cin >> arr[i++]);

    for(int i=0; i<n; ++i){
        if(arr[i].length() > 10) cout << arr[i][0] + to_string(arr[i].length()-2) + arr[i][arr[i].size()-1] << endl;
        else cout << arr[i] << endl;
    }

    return 0;
}