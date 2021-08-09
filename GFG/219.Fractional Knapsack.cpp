// My Solution
class Solution
{
    public:
    static bool myComp(Item a, Item b){
        return ((double)a.value/a.weight) > ((double)b.value/b.weight);
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr+n, myComp);
        double ans = 0;
        for(int i=0; i<n; ++i){
            if(arr[i].weight <= W){
                ans += arr[i].value;
                W -= arr[i].weight;
            }
            else{
                ans += (double)arr[i].value * ((double)W/arr[i].weight);
                return ans;
            }
        }
        return ans;
    }
};