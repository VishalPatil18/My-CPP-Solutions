#include<bits/stdc++.h>
using namespace std;
   
int main()
{   
    string str = "asdFAsDJKaf";

    // convert a string into uppercase
    for(int i=0; i<str.size(); i++)
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    
    cout << str << endl;
    /* ======================================================================= */
    
    // convert to lowercase
    for(int i=0; i<str.size(); i++)
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;

    cout << str << endl;

    /* ======================================================================= */
    
    // sorting the string
    string s = "234523";
    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;

    return 0;
}

/* ======================================================================= */
/*
    Output: ASDFASDJKAF
            asdfasdjkaf
            543322
*/