/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    string s = to_string(n);
    for(int i=0; i<s.length(); ++i){
        if(s[i] == '0') s[i] = '5';
    }
    int x = stoi(s);
    return x;
}