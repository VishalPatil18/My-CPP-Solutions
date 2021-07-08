// My Solution - Using set
class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int> s;
        for(int i=0; i<n; ++i) s.insert(arr1[i]);
        for(int i=0; i<m; ++i) s.insert(arr2[i]);
        vector<int> ans;
        for(auto x : s) ans.push_back(x);
        return ans;
    }
};

// Without set
class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> ans;
        int i=0, j=0, prev = -1;
        while(i < n && j < m){
            if(arr1[i] < arr2[j]){
                if(arr1[i] != prev){
                    ans.push_back(arr1[i]);
                    prev = arr1[i];
                }
                i++;
            }
            else if(arr1[i] > arr2[j]){
                if(arr2[j] != prev){
                    ans.push_back(arr2[j]);
                    prev = arr2[j];
                }
                j++;
            }
            else if(arr1[i] == arr2[j]){
                if(arr1[i] != prev && arr2[j] != prev){
                    ans.push_back(arr1[i]);
                    prev = arr1[i];
                }
                i++, j++;
            }
        }
        while(i < n){
            if(arr1[i] != prev){
                ans.push_back(arr1[i]);
                prev = arr1[i];
            }
            i++;
        }
        while(j < m){
            if(arr2[j] != prev){
                ans.push_back(arr2[j]);
                prev = arr2[j];
            }
            j++;
        }
        
        return ans;
    }
};