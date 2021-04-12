/*
    https://www.codechef.com/APRIL21C/problems/MEXSTR
    score - 20/100
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define M 1000000
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define all(x) x.begin(), x.end()
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define mod (int) 998244353
#define MOD (int) 1e9+7
#define X 1001100011100001111ll
#define all_test_cases int t; scanf("%d", &t); while (t--)
#define endl "\n"

bool existence(string fg,string s) {
    for(int i=0, j=0; i<s.size(); i++) {
         if(s[i] == fg[j]) j++;
         if(j == fg.size()) return true;
    }
    return false;
}

string sx(string s) {
    queue<string> q;
    q.push("1");
    while(true) {
        string fg=q.front();
        q.pop();
        if(!existence(fg,s)) return fg;
        string fh=fg;
        fg+="0";
        fh+="1";
        q.push(fg);
        q.push(fh);
    }
    return "0";
}

string solve(){
    string s;
    cin >> s;
    int c = 0;
    
    for(int i=0;i<s.size();i++) if(s[i]=='0') c++;
    
    if(c == 0) return "0";
    
    return sx(s);
}

int main()
{
    all_test_cases cout << solve() << endl;
    return 0;
}