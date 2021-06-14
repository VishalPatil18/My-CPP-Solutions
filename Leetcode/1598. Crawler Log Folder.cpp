// My Solution - Brute Force
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans = 0;
        stack<string> folders;
        
        for(string x : logs){
            if(x == "./") continue;
            else if(!folders.empty() && x == "../"){
                folders.pop();
                ans--;
            }
            else if(x != "../"){
                folders.push(x);
                ans++;
            }
        }
        return ans;
    }
};

// Without Stack Solution
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans = 0;
        
        for(string log : logs){
            if(log == "../" && ans != 0) ans--;
            else if(log != "./" && log != "../") ans++;
        }
        
        return ans;
    }
};