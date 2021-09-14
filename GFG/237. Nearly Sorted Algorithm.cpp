// My Solution - Using Priority Queue (MinHeap)
#include<bits/stdc++.h>
using namespace std;

int main()
 {
    int t;
    cin >> t;
    vector<vector<int>> ans;
    
    while(t--){
        vector<int> subans;
        int n, k;
        cin >> n >> k;
        
        priority_queue<int, vector<int>, greater<int>> minH;
        for(int i=0; i<n; ++i){
            int x; cin >> x;
            minH.push(x);
            if(minH.size() > k){
                subans.push_back(minH.top());
                minH.pop();
            }
        }
        while(!minH.empty()){
            subans.push_back(minH.top());
            minH.pop();
        }
        ans.push_back(subans);
    }
    
    for(vector<int> x : ans){
        for(int y : x) cout << y << " ";
        cout << endl;
    }
    return 0;
}