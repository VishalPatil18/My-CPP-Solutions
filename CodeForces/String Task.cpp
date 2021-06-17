// https://codeforces.com/problemset/problem/118/A

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    string s;
    cin >> s;

    string ans = "";

    for(int i=0; i<s.length(); ++i){
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' ||
           s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U' || s[i] == 'y' || s[i] == 'Y') continue;
        else {
            ans += ".";
            if(s[i] >= 65 && s[i] <= 90) ans += s[i] + 32;
            else ans += s[i];
        }
    }
    cout << ans << endl;

    return 0;
}