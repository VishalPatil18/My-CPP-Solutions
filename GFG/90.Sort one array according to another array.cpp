void sortArray(int a[], char b[], int n){
    vector<pair<int, char>> arrp;
    for(int i=0; i<n; ++i){
        arrp.push_back({a[i], b[i]});
    }
    
    sort(arrp.begin(), arrp.end());
    for(int i=0; i<n; ++i){
        cout << arrp[i].second << " ";
    }
}