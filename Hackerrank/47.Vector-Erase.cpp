/*
    https://www.hackerrank.com/challenges/vector-erase/problem
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x , y, z;
    cin >> n;
    vector<int> vec;
    for (int i=0 ; i < n ; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    cin >> x;
    cin >> y >> z;
    vec.erase(vec.begin()+(x-1));
    vec.erase(vec.begin()+(y-1),vec.begin()+(z-1));
    cout << vec.size() << endl;
    for (int x: vec){
            cout << x <<" ";
        }
    cout << endl;
    return 0;
}

