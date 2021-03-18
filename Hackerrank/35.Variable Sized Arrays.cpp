/*
    https://www.hackerrank.com/challenges/variable-sized-arrays/problem
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int ans[q];

    vector<int> v[n] ;
    for (int i = 0; i < n; i++){
        int m;
        cin >> m;
        for (int j=0 ; j < m ; j++){
            int x;
            cin >> x;
            v[i].push_back(x);
            }
        }
    for (int i = 0; i < q; i++){
        int m, k;
        cin >> m >> k;
        ans[i] = v[m].at(k);
    }
    for (int i = 0; i < q; i++){
        cout << ans[i] << endl;
    }
    return 0;
}

