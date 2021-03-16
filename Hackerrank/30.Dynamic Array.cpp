/*
    https://www.hackerrank.com/challenges/dynamic-array/problem
*/

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<int> temp;
    vector<vector<int>> arr(n, temp);
    vector<int> ans;
    int lastAns = 0;
    for(int i=0; i < queries.size(); ++i) {
        int x = queries[i][1], y = queries[i][2], z = queries[i][0];
        if(z == 1) {
            int idx = (x ^ lastAns)%n;
            arr[idx].push_back(y);
        }
        else if(z == 2) {
            int idx = ((x^lastAns) % n);
            lastAns = arr[idx][y%(arr[idx].size())];
            ans.push_back(lastAns);
            // deb2(lastAns, arr[idx].size());
        }
        // for(auto a : arr) {
        //     for(auto b : a) cout << b << " ";
        //     cout << endl;
        // }

    }
    return ans;
}

