// http://codeforces.com/contest/734/problem/A
#include<bits/stdc++.h>
using namespace std;

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    string s;
    cin >> n;
    cin >> s;

    int anton = 0, danik = 0;
    for(auto x : s) (x == 'A') ? anton++ : danik++;

    if(anton > danik) cout << "Anton" << endl;
    else if(danik > anton) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

    return 0;
}