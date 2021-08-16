// https://codeforces.com/contest/443/problem/A 
#include<bits/stdc++.h>
using namespace std;

/*** Solution Starts from here ***/
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s;
    getline(cin, s);

    int hash[26] = {0};
    for(char x : s){
        if(x <= 'z' && x >= 'a') hash[x - 'a']++;
    }
    int ans = 0;
    for(int i=0; i<26; ++i) if(hash[i] > 0) ans++;

    cout << ans << endl;
    
    return 0;
}
