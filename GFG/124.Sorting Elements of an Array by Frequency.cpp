// My Solution
class Solution{
    public:
    vector<int> sortByFreq(int arr[],int n)
    {
        map<int, int> mp;
        for(int i=0; i<n; ++i) mp[arr[i]]++;
        
        multimap<int, int, greater<int>> temp;
        for(auto &x : mp){
            temp.insert(pair<int, int> (x.second, x.first));
        }
        
        vector<int> ans;
        for(auto x : temp){
            int y = x.first;
            while(y--) ans.push_back(x.second);
        }
        
        return ans;
    }
};

// Using Hash
bool sortByVal(const pair<int, int>& a, const pair<int, int>& b){
    if(a.second == b.second) return a.first < b.first;      // If frequency is same then sort by index
    return a.second > b.second;
}

vector<int> sortByFreq(int a[], int n){
    vector<int> res;
    unordered_map<int, int> m;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; ++i)
        m[a[i]]++;     // Map m is used to keep track of count of elements in array

    copy(m.begin(), m.end(), back_inserter(v));     // Copy map to vector
    sort(v.begin(), v.end(), sortByVal);            // Sort the element of array by frequency

    for (int i = 0; i < v.size(); ++i) 
        while(v[i].second--) res.push_back(v[i].first);

    return res;
}