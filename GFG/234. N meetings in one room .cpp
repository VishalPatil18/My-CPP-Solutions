// My Solution
class Solution
{
    public:
    static bool comp(pair<int, int> &a, pair<int, int> &b){
        return a.second < b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> t;
        for(int i=0; i<n; ++i) t.push_back({start[i], end[i]});
        
        sort(t.begin(), t.end(), comp);
        int ans = 1, lastmeetend = t[0].second;
        for(int i=1; i<t.size(); ++i){
            if(t[i].first > lastmeetend){
                ans++;
                lastmeetend = t[i].second;
            }
        }
        return ans;
    }
};