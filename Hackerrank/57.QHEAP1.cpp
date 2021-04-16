/*
    https://www.hackerrank.com/challenges/qheap1/problem
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    vector<int> heap;
    vector<int> ans;
    int min = 1000000000;
    
    while(t--) {
        int n, x;
        cin >> n;
        if(n == 1){
            cin >> x;
            if(x < min) min = x;
            heap.push_back(x);
        }
        else if(n == 2){
            cin >> x;
            heap.erase(std::remove(heap.begin(), heap.end(), x), heap.end());
            if(heap.size() == 0) min = 1000000000;
            else if(x == min) min = *min_element(heap.begin(), heap.end());
        }
        else if(n == 3){
            ans.push_back(min);
        }
    }

    for(int x: ans) cout << x << endl;

    return 0;
}