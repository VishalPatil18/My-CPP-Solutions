// My Solution - Brute Force
int countSmallerRight(int arr[], int n) {
    int ans = 0;
    
    for(int i=0; i<n; ++i){
        unordered_set<int> s;
        for(int j=i+1; j<n; ++j){
            if(arr[j] < arr[i] && s.find(arr[j]) == s.end()) s.insert(arr[j]);
        }
        int sz = s.size();
        ans = max(ans, sz);
    }
    
    return ans;
}

// Optimised
int countSmallerRight(int arr[], int n) {
    int ans = 0;
    
    set<int> s;
    for(int i=n-1; i>=0; --i){
        s.insert(arr[i]);
        auto it = s.lower_bound(arr[i]);
        int p = distance(s.begin(), it);
        ans = max(ans, p);
    }
    
    return ans;
}