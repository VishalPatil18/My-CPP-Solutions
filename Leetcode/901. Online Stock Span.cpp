// My Solution - Stack

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
class StockSpanner {
public:
    vector<int> prices;
    stack<pair<int, int>> stk;
    int count;
    StockSpanner() {
        count = 0;
    }
    
    int next(int price) {
        int ans;
        if(stk.empty()) ans = count - (-1);
        else if(stk.top().second > price) ans = count - stk.top().first;
        else {
            while(!stk.empty() && stk.top().second <= price) stk.pop();
            if(stk.empty()) ans = count - (-1);
            else ans = count - stk.top().first;
        }
        stk.push({count, price});
        count++;
        return ans;
    }
};
