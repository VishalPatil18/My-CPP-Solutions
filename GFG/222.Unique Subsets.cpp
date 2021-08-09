// My Solution
class Solution
{
    public:
    void subset(vector<int> &arr, int n, set<vector<int>> &setans, vector<int> &subans, int index){
        if(index == n){
            setans.insert(subans);
            return;
        }
        
        subset(arr, n, setans, subans, index+1);
        subans.push_back(arr[index]);
        subset(arr, n, setans, subans, index+1);
        subans.pop_back();    
    }
    
    vector<vector<int>> AllSubsets(vector<int> arr, int n)
    {
        set<vector<int>> setans;
        vector<int> subans;
        
        sort(arr.begin(), arr.end());
        
        subset(arr, n, setans, subans, 0);
        
        vector<vector<int>> ans;
        for(auto x : setans) ans.push_back(x);
        
        return ans;
    }
};