// My Solution
class Solution 
{
    public:
    static bool myComp(Job a, Job b){ return a.profit > b.profit; }
    
    vector<int> JobScheduling(Job arr[], int n){ 
        vector<int> ans;
        bool jobsDone[n] = {false};
        sort(arr, arr+n, myComp);
        int profit = 0, timE = 0;
        
        for(int i=0; i<n; ++i){
            for(int j=min(n, arr[i].dead-1); j>=0; --j){
                if(!jobsDone[j]){
                    timE++;
                    profit += arr[i].profit;
                    jobsDone[j] = true;
                    break;
                }
            }
        }
        ans.push_back(timE);
        ans.push_back(profit);
        return ans;
    } 
};
