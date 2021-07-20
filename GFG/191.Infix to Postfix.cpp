// My Solution
class Solution
{
    public:
    int precedence(char a){
        if(a == '^') return 3;
        else if(a == '*' || a == '/') return 2;
        else if(a == '+' || a == '-') return 1;
        else if(a == '(') return 0;
    }
    
    string infixToPostfix(string s)
    {
        string ans;
        stack<char> stk;
        
        for(int i=0; i<s.length(); ++i){
            if(s[i] <= 'z' && s[i] >= 'a') ans.push_back(s[i]);
            else if(s[i] == '(') stk.push(s[i]);
            else if(s[i] == ')'){
                while(!stk.empty() && stk.top() != '('){
                    ans.push_back(stk.top());
                    stk.pop();
                }
                stk.pop();
            }
            else if(stk.empty() || (precedence(s[i]) > precedence(stk.top()))) stk.push(s[i]);
            else{
                while(!stk.empty() && (precedence(s[i]) <= precedence(stk.top()))){
                    ans += stk.top();
                    stk.pop();
                }
                stk.push(s[i]);
            }
        }
        
        while(!stk.empty()){ ans += stk.top(); stk.pop(); }
        
        return ans;
    }
};