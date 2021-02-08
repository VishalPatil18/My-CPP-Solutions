#include<bits/stdc++.h>
using namespace std;
   
int main()
{   
    string s = "appappapp";
    int freq[26] = {0};

    for(int i=0; i<s.size(); i++) freq[s[i]-'a']++;

    char ans = 'a';
    int maxF = 0;

    for(int i=0; i<26; i++) {
        if(freq[i] > maxF) {
            maxF = freq[i];
            ans = i + 'a';
        }
    }
    cout << "The most frequent letter is " << ans << " which occured " << maxF << " times.\n";

    return 0;
}

/* ======================================================================= */
/*
    Output: The most frequent letter is p which occured 6 times.
*/