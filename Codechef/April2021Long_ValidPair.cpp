/*
    https://www.codechef.com/APRIL21C/problems/SOCKS1/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    bool flag = false;
    cin >> a >> b >> c;
    int arr[11] = {0};
    arr[a]++;
    arr[b]++;
    arr[c]++;
    for (int i = 1; i < 11; i++) {
        if (arr[i] > 1){
            flag = true;
            break;
        }
    }
    
    if (!flag) cout << "NO";
    else cout << "YES";

    cout << endl;

    return 0;
}