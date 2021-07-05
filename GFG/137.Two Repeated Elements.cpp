// My Solution
class Solution
{
    public:
    pair<int,int> twoRepeated (int arr[], int N)
    {
        vector<int> ans;
        for(int i=0; i<N+2; ++i){
            if(arr[abs(arr[i]) - 1] < 0) ans.push_back(abs(arr[i]));
            else arr[abs(arr[i]) - 1] *= -1;
        }
        
        return {ans[0], ans[1]};
    }
};