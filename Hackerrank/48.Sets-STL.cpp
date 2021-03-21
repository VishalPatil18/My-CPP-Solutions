/*
    https://www.hackerrank.com/challenges/cpp-sets/problem
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    vector<string> ans ;
    set<int> s;
    for (int i=0 ; i < q ; i++){
        int y, x;
        cin >> y >> x;
        if (y == 1){
            s.insert(x);
        }
        else if (y == 2){
            s.erase(x);
        }
        else if (y == 3){
            set<int>::iterator itr=s.find(x);
            if (itr != s.end()){
                ans.push_back("Yes");
            }
            else{
                ans.push_back("No");
            }
        }
    }
    for (string x: ans){
            cout << x <<endl;
        }
    return 0;
}

