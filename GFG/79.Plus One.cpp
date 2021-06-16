class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        if(N == 1 && arr[0] == 0){
            arr[0]++;
            return arr;
        }
        
        vector<int> ans = arr;
        int index = N-1;
        while(index >= 0 && arr[index] == 9){
            ans[index--] = 0;
        }
        if(index < 0){
            ans.push_back(0);
            ans[0] = 1;
        }
        else {
            ans[index] += 1;
        }
        return ans;
    }
};

// Using Carry
void incrementVector(vector<int> &a)
{
    int n = a.size();

    // Add 1 to last digit and find carry
    a[n-1] += 1;
    int carry = a[n-1]/10;
    a[n-1] = a[n-1] % 10;

    // Traverse from second last digit
    for(int i=n-2; i>=0; i--) {
        if (carry == 1) {
           a[i] += 1;
           carry = a[i]/10;
           a[i] = a[i] % 10;
        }
    }

    // If carry is 1, we need to add a 1 at the beginning of vector
    if (carry == 1) a.insert(a.begin(), 1);
}