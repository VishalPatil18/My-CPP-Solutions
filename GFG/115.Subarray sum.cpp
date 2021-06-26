class Solution{
    public:
        long long int maximum_sum(vector<long long int>v)
        {
            long long int size = v.size();
            long long int prefixSum[size] = {v[0]};
            
            unordered_map<long long int, long long int> mp;
            long long int maximum_sum = 0;
            long long int max_ele = v[0];
            
            for(int i = 1; i < size; i++) {
                prefixSum[i] = prefixSum[i-1] + v[i];
                max_ele = max(max_ele, v[i]);
            }
            
            for(int i = 0; i < size; i++) {
                auto itr = mp.find(v[i]);
                if(itr != mp.end()) maximum_sum = max(maximum_sum, (prefixSum[i] - prefixSum[mp[v[i]]] + v[i]));
                else mp[v[i]] = i;
            }
            
            return maximum_sum == 0 ? max_ele : maximum_sum;
        }
};