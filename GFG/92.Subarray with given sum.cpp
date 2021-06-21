class Solution
{
    public:
    vector<int> subarraySum(int arr[], int n, int s)
    {
        vector<int> ans;
        int start = 0, end = 0, sum = arr[0];
        for(int i=1; i<n; i++){
            sum += arr[i];
            
            if(sum > s){
                while(sum > s && start < i) sum -= arr[start++];
            }
            
            if(sum == s){
                end = i;
                break;
            }
        }
        
        if(sum != s){
            ans.push_back(-1);
            return ans;
        }
        
        ans.push_back(start+1);
        ans.push_back(end+1);
        return ans;
    }
};