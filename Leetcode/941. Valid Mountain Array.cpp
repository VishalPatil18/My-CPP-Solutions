class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() <= 2) return false;
        bool increasing = true;
        int top = 0;
        for(int i=0; i<arr.size()-1; ++i){
            if(arr[i+1] > arr[top]) top = i+1;
            
            if(arr[i+1] < arr[i] && increasing) increasing = false;
            
            if(arr[i+1] >= arr[i] && !increasing) return false;
            else if(arr[i+1] <= arr[i] && increasing) return false;
        }
        if(top == 0 || top == arr.size()-1) return false;
        return true;
    }
};

// Other Solution
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i = 0;
        // walk up
        while(i+1 < arr.size() && arr[i] < arr[i+1]) i++;

        // peak can't be first or last
        if(i == 0 || i == arr.size()-1) return false;

        // walk down
        while(i+1 < arr.size() && arr[i] > arr[i+1]) i++;

        return (i == arr.size()-1);
    }
};

/*
    Two people climb from left and from right separately.
    If they are climbing the same mountain,
    they will meet at the same point.
*/
bool validMountainArray(vector<int>& A) {
    int n = A.size(), i = 0, j = n - 1;
    while (i + 1 < n && A[i] < A[i + 1]) i++;
    while (j > 0 && A[j - 1] > A[j]) j--;
    return i > 0 && i == j && j < n - 1;
}