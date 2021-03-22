/*
    https://www.hackerrank.com/challenges/cpp-maps/problem
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    vector<int> ans ;
    map<string, int> marks;
    for (int i=0 ; i < q ; i++){
        int z, y;
        string x;
        cin >> z;
        if (z == 1){
            cin >> x >> y;
            map<string,int>::iterator itr=marks.find(x);
            if (itr != marks.end()){
                marks[x] += y ;
            }
            else{
                marks.insert(make_pair(x,y));
            }
        }
        else if (z == 2){
            cin >> x;
            marks.erase(x);
        }
        else if (z == 3){
            cin >> x;
            ans.push_back(marks[x]) ;
        }
    }
    for (int x: ans){
            cout << x << endl;
        }

    return 0;
}

