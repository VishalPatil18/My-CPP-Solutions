// https://codeforces.com/contest/236/problem/A
#include<bits/stdc++.h>
using namespace std;

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s;
    cin >> s;

    set<char> st;
    for(char x : s) st.insert(x);

    if(st.size() % 2) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;
    
    return 0;
}
