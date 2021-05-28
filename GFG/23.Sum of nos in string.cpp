class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
        int ans = 0;
        string nums = "";
        str += " ";
        for(int i=0; i<str.length(); i++){
            char ch = str[i];
            if(isdigit(ch)) nums += ch;
            else if(nums.length() > 0){
                ans += stoi(nums);
                nums = "";
            }
        }
        
        return ans;
    }
};