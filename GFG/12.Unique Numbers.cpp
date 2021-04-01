class Solution
{
public:
    vector<int> uniqueNumbers(int L,int R)
    {
        // Write Your Code here
        vector<int> ans;
        
        for(int i=L; i<=R; ++i) {
            int hash[10] = {0};
            int x = i;
            while(x>0) {
                hash[x%10]++;
                x /= 10;
            }
            bool flag = true;
            for(int j=0; j<10; ++j){
                if(hash[j] > 1) {
                    flag = false;
                    break;
                }
            }
            if(flag == true) ans.push_back(i);
        }
        return ans;
    }
};