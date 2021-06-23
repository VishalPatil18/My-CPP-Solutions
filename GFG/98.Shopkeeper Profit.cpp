class Solution{
    public:
        int profit(vector<int>v)
        {
            int ans = v.back();
            
            stack<int> maxValues;
            maxValues.push(v.back());
            for(int i=v.size()-2; i>=0; --i){
                while(!maxValues.empty() && maxValues.top() < v[i]) maxValues.pop();
                    
                if(maxValues.empty()) ans += v[i];
                else ans += maxValues.top() - v[i];
                maxValues.push(v[i]);
            }
            return ans;
        }
};