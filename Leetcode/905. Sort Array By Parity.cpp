// My SOlution
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int oddStart = -1, evenEnd = nums.size();
        while(true){
            do{
                oddStart++;  
            } while(oddStart < nums.size() && nums[oddStart]%2 == 0);
            do{
                evenEnd--;
            } while(evenEnd >= 0 && nums[evenEnd]%2 != 0);
            if(oddStart >= evenEnd) return nums;
            swap(nums[evenEnd], nums[oddStart]);
        }
    }
};

// Using Quick Sort ALgo 
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = nums.size()-1;
        while (i < j) {
            if(nums[i]%2 > nums[j]%2) swap(nums[i], nums[j]);
            
            if (nums[i] % 2 == 0) i++;
            if (nums[j] % 2 == 1) j--;
        }
        return nums;
    }
};

// 3rd Method
vector<int> sortArrayByParity(vector<int>& A) {
    int len = A.size()-1;
    for(int i = 0; i<len; i++){

        if(A[i]%2 == 1 )
        swap( A[i--], A[len--] );
    }
    return A;
}