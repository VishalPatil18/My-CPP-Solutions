// My Solution - Brute Force
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        if(prices.size() == 1) return prices;
        vector<int> ans(prices.size(), -1);
        for(int i=0; i<prices.size(); i++) {
            for(int j=i+1; j<prices.size(); j++) {
                if(prices[j] <= prices[i]) {
                    ans[i] = prices[i] - prices[j];
                    break;
                }    
            } 
            if(ans[i] == -1) ans[i] = prices[i];
        }
        return ans;
    }
};

// Optimized Solution - O(n) time && O(1) space
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> stk;
        
        for(int i=0; i<n; ++i){
            while(!stk.empty() && prices[stk.top()] >= prices[i]){
                prices[stk.top()] -= prices[i];
                stk.pop();
            }
            stk.push(i);
        }
        return prices;
    }
};