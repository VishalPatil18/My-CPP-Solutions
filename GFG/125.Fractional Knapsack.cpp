// My Solution
class Solution
{
    public:
    static bool compare(Item x, Item y){
        return ((double)x.value/x.weight > (double)y.value/y.weight);
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        double ans = 0;
        sort(arr, arr+n, compare);
        
        double wt = 0;
        for(int i=0; i<n; ++i){
            if(arr[i].weight + wt <= W)
                ans += arr[i].value;
            else if(arr[i].weight + wt > W)
                ans += ((double)(W - wt)/arr[i].weight)*arr[i].value;
            
            wt += arr[i].weight;
            if(wt >= W) return ans;
        }
        return ans;
    }     
};
