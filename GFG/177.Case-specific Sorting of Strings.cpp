// My Solution
class Solution
{
    public:
    string caseSort(string str, int n)
    {
        string upper, lower;
        for(int i=0; i<n; ++i){
            if(str[i] >= 'a' && str[i] <= 'z') lower.push_back(str[i]);
            else upper.push_back(str[i]);
        }
        sort(upper.begin(), upper.end());
        sort(lower.begin(), lower.end());
        
        int j=0, k=0;
        for(int i=0; i<n; ++i){
            if(str[i] >= 'a' && str[i] <= 'z'){ str[i] = lower[j]; j++; }
            else{ str[i] = upper[k]; k++; }
        }
        return str;
    }
};