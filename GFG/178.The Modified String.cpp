// My Solution
class Solution
{
    public:
    int modified (string a)
    {
        int ans = 0, count = 1;
        char prev = a[0];
        for(int i=1; i<a.length(); ++i){
            if(a[i] == prev) count++;
            else{ prev = a[i]; count = 1; }
            if(count == 3){
                ans += (count - 1)/2;
                count = 1;
                prev = a[i];
            }
        }
        return ans;
    }
};