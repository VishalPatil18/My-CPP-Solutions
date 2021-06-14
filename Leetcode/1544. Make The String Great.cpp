// My Solution - Brute Force
class Solution {
public:
    string makeGood(string s) {
        string ans = "";
        stack<char> stk;
        
        for(int i=0; i<s.length(); ++i){
            if(!stk.empty() && abs(stk.top() - s[i]) == 32) stk.pop();
            else stk.push(s[i]);
        }
        
        while(!stk.empty()){
            ans = stk.top() + ans;
            stk.pop();
        }
        return ans;
    }
};

// Without Stack Solution
class Solution {
public:
    string makeGood(string s) {
        for(int i=0; i<s.length()-1; i++){       
            if(abs(s[i] - s[i+1]) == 32){  
                s.erase(i,2);
                i=max(-1,i-2);              
            }
            if(s.length() == 0) break;    
        }
       return s; 
    }
};