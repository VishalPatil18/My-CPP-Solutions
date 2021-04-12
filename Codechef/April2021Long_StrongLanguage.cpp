/*
    https://www.codechef.com/APRIL21C/problems/SSCRIPT
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, k, count = 1;
        bool flag = false;
        cin >> n >> k;
        char S[n];
        for (int i = 0; i < n; cin >> S[i++]);

        for (int i = 0; S[i] != '\0'; i++) {
            if (S[i] == '*') {
                count = 1;
                while (S[i] == S[i + 1]) {
                    if (count == k) {
                        flag = true;
                        break;
                    }
                    i++;
                    count++;
                }
                if (count == k) {
                    flag = true;
                    break;
                }
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}