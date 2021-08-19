// My Solution - Using 2 Binary Search
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int low = 0, high = n - 1, mid;
        while(low <= high){
            mid = low + (high - low)/2;
            if(matrix[mid][0] <= target && matrix[mid][m-1] >= target){
                // binary search in this row
                int low2 = 0, high2 = m-1, mid2;
                while(low2 <= high2){
                    mid2 = low2 + (high2 - low2)/2;
                    if(matrix[mid][mid2] == target) return true;
                    else if(matrix[mid][mid2] < target) low2 = mid2 + 1;
                    else high2 = mid2 - 1;
                }
                return false;
            }
            else if(matrix[mid][0] > target) high = mid - 1;
            else low = mid + 1;
        }
        return false;
    }
};

// Other Solutions
class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int l = 0, r = m * n - 1;
        while (l != r){
            int mid = (l + r - 1) >> 1;
            if(matrix[mid / m][mid % m] < target) l = mid + 1;
            else r = mid;
        }
        return matrix[r/m][r%m] == target;
    }
};