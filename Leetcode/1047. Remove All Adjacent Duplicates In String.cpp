// My Solution
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        for(int i=0; i<s.length(); ++i){
            if(!stk.empty() && stk.top() == s[i]) stk.pop();
            else stk.push(s[i]);
        }
        s = "";
        while(!stk.empty()){
            s = stk.top() + s;
            stk.pop();
        }
        return s;
    }
};

// Other Solution without stack
/*
    i refers to the index to set next character in the output string.
    j refers to the index of current iteration in the input string.

    Iterate characters of S one by one by increasing j.

    If S[j] is same as the current last character S[i - 1],
    we remove duplicates by doing i -= 2.

    If S[j] is different as the current last character S[i - 1],
    we set S[i] = S[j] and increment i++.
*/ 
string removeDuplicates(string s) {
    int i = 0, n = s.length();
    for (int j = 0; j < n; ++j, ++i) {
        s[i] = s[j];
        if (i > 0 && s[i - 1] == s[i]) // count = 2
            i -= 2;
    }
    return s.substr(0, i);
}

// Other SOlution
string removeDuplicates(string S) {
    string res = "";
    for (char& c : S)
        if (res.size() && c == res.back())
            res.pop_back();
        else
            res.push_back(c);
    return res;
}
