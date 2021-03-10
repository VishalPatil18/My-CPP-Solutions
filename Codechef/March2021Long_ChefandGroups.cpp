/*
    https://www.codechef.com/MARCH21C/problems/GROUPS
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> ans;

void SOLVE(){
    string s;
    cin >> s;
    bool flag = false;
    int groups = 0;

    if(s[0] == '1') {
        groups++;
        flag = true;
    }

    for(int i=1; i<s.size(); ++i) {
        if(s[i] == '0') flag = false;
        else if(s[i] == '1') {
            if(flag == false){
                groups++;
                flag = true;
            }
        }
    }

    ans.push_back(groups);
}
    
int main()
{   
    int t;
    cin >> t;
    
    while (t--){
        SOLVE();
    }

    for(int x: ans) cout << x << "\n";

    return 0;
}