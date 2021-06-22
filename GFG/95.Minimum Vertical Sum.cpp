// My Solution
int minimum_vertical_sum(vector<vector<int>>v)
{
    int ans;
    vector<int> colSum;
    
    for(int i=0; i<v.size(); ++i){
        for(int j=0; j<v[i].size(); ++j){
            if(colSum.size() <= j) colSum.push_back(v[i][j]);
            else colSum[j] += v[i][j];
        }
    }
    ans = colSum[0];
    for(int i=1; i<colSum.size(); ++i) ans = min(ans, colSum[i]);
    
    return ans;
}

// Other Solution - O(1) Space
int minimum_vertical_sum(vector<vector<int>>v)
{
    int mins = INT_MAX, i = 0;
    while(true){
        int sum = 0;
        for(int j=0; j<v.size(); j++) if(v[j].size() > i) sum += v[j][i];
        if(sum==0) break;
        mins = min(mins, sum);
        i++;
    }
    
    return mins;
}