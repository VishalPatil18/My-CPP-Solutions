// My Solution
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int prevMax = arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        for(int i=arr.size()-2; i>=0; --i){
            int temp = arr[i];
            arr[i] = prevMax;
            prevMax = max(temp, prevMax);
        }
        return arr;
    }
};

// Other Solutions
vector<int> replaceElements(vector<int>& A, int mx = -1) {
    for (int i = A.size() - 1; i >= 0; --i)
        mx = max(mx, exchange(A[i], mx));
    return A;
}
