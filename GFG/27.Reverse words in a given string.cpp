class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here
        string ans;
        int length = 0;
        for(int i=S.length() - 1; i>=0; --i){
            if(S[i] == '.'){
                for(int j=0; j<length; ++j){
                    ans += S[i+j+1];
                }
                ans += '.';
                length = 0;
            }
            else {
                length++;
            }
        }
        for(int j=0; j<length; ++j){
            ans += S[j];
        }
        
        return ans;
    } 
};