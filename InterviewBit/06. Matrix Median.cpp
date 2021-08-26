// Brute Force
int Solution::findMedian(vector<vector<int> > &A) {
    int m = A.size(), n = A[0].size();
    
    vector<int> temp;
    for(auto x : A)
        for(int y : x) temp.push_back(y);
    
    sort(temp.begin(), temp.end());

    return temp[temp.size()/2];
}

// Using Binary Search
