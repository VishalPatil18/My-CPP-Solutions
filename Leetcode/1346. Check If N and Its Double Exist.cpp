class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> map;
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
            if(arr[i]==0 && map[arr[i]]==1)
                continue;
            if(map.count(2*arr[i])>0 || ((arr[i]%2==0) && map.count(arr[i]/2)>0))
                return true;
        }
        return false;  
    }
};