// My Solution
class Solution
{
    public:
    int evaluatePostfix(string S)
    {
        stack<int> stk;
        for(int i=0; i<S.length(); ++i){
            if(S[i] >= '0' && S[i] <= '9') stk.push(S[i] - '0');
            else {
                int op1 = stk.top(); stk.pop();
                int op2 = stk.top(); stk.pop();
                int ans;
                
                if(S[i] == '*') ans = op2 * op1;
                else if(S[i] == '/') ans = op2 / op1;
                else if(S[i] == '+') ans = op2 + op1;
                else if(S[i] == '-') ans = op2 - op1;
                
                stk.push(ans);
            }
        }
        return stk.top();
    }
};