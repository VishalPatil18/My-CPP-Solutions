// My SOlution
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int low = 0, high = arr.size()-1;
        int mid;
        while(low <= high){
            mid = low + (high - low)/2;
            if(arr[mid] == x) break;
            else if(arr[mid] > x) high = mid - 1;
            else if(arr[mid] < x) low = mid + 1;
        }
        
        int left, right;
        if(high < 0) left = 0;
        else if(low > arr.size() - 1) left = arr.size()-1;
        else if(abs(arr[low] - x) < abs(arr[high] - x)) left = mid;
        else left = mid - 1;
        right = left + 1;
        
        while(k > 0 && left >= 0 && right < arr.size()){
            if(abs(arr[left] - x) <= abs(arr[right] - x)) ans.push_back(arr[left--]);
            else if(abs(arr[left] - x) > abs(arr[right] - x)) ans.push_back(arr[right++]);
            k--;
        }
        while(k > 0 && left >= 0) ans.push_back(arr[left--]), k--;
        while(k > 0 && right < arr.size()) ans.push_back(arr[right++]), k--;
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// Other Solutions
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int low = 0, high = arr.size()-k;
        while(low < high){
            int mid = low + (high - low)/2;
            if(x-arr[mid] > arr[mid + k] - x) low = mid + 1;
            else high = mid;
        }
        return vector<int>(arr.begin() + low, arr.begin() + low + k);    
    }
};