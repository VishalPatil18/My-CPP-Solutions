#include<bits/stdc++.h>
using namespace std;
   
int main()
{
    // Declaring a string
    string str = "Vishal";          // Vishal
    cout << "DECLARING 1: " << str << endl;
    
    string str1(5, 'n');         // nnnnn
    cout << "DECLARING 2: " << str1 << endl;
    
    string str2;
    getline(cin, str2);             // takes whole sentences with spaces also;
    cout << "GETLINE EXECUTED: " << str2 << endl;

    /* ======================================================================= */
    
    // append is used to add two strings
    string s1 = "fam";
    string s2 = "ily";
    s1.append(s2);
    cout << "APPEND IS EXECUTED: " << s1 << endl;

    /* ======================================================================= */
    
    // print the string together and not change them
    string s3 = "fam";
    string s4 = "ily";
    cout << "ADDITION OF STRINGS IS EXECUTED: " << s3 + s4 << endl;
    
    /* ======================================================================= */
    
    // clear is used to clear the string and make it null
    string s5 = "sdgdsfgdsfh";
    s5.clear();
    cout << "CLEAR IS EXECUTED: " << s5 << endl;

    /* ======================================================================= */
    
    // compare is used to compare two strings
    string s6 = "abc";
    string s7 = "abc";
    cout << "COMPARE IS EXECUTED: " << s6.compare(s7) << endl;
    
    /* ======================================================================= */
    
    // empty is used to check if a string is empty/null or not
    string s8 = "sdgdsfgdsfh";
    string s9 = "";
    cout << "EMPTY IS EXECUTED: " << s8.empty() << " " << s9.empty() << endl;

    /* ======================================================================= */

    // erase is used to delete some specific characters from the string
    string s10 = "nincompoop";
    s10.erase(3, 3);
    cout << "ERASE IS EXECUTED: " << s10 << endl;

    /* ======================================================================= */
    
    // find is used to find a substring from a string. It returns the index where
    // first entry of the substring is found
    string s11 = "nincompoop";
    cout << "FIND IS EXECUTED: " << s11.find("comp") << endl;

    /* ======================================================================= */
    
    // insert is used to add a string into another string at any position
    string s12 = "nincompoop";
    s12.insert(3, "lol");
    cout << "INSERT IS EXECUTED: " << s12 << endl;

    /* ======================================================================= */
    
    // length/size is used to get the length/size of string
    string s13 = "nincompoop";
    cout << "SIZE IS EXECUTED: " << s13.size() << endl;
    cout << "LENGTH IS EXECUTED: " << s13.length() << endl;

    /* ======================================================================= */
    
    // substr is used to get the substring from a string. It takes two arguments first is the position(starting)
    // and second is the length(substring)
    string s14 = "nincompoop";
    string s15 = s14.substr(6, 4);
    cout << "SUBSTR IS EXECUTED: " << s15 << endl;

    /* ======================================================================= */
    
    // stoi is used to convert a numeric string to int
    string s16 = "786";
    int x = stoi(s16);
    cout << "STOI IS EXECUTED: " << x+2 << endl;

    /* ======================================================================= */
    
    // to_string is used to convert an int to a numeric string
    cout << "TO_STRING IS EXECUTED: " << to_string(x) + "2" << endl;

    /* ======================================================================= */
    
    // sort is used to sort all the characters of string
    string s17 = "sdgdsfgdsfh";
    sort(s17.begin(), s17.end());
    cout << "SORT IS EXECUTED: " << s17 << endl;

    /* ======================================================================= */
    
    // transform is used for many different operations. One such is toupper/tolower
    string s18 = "VisHal";
    transform(s18.begin(), s18.end(), s18.begin(), ::toupper);
    cout << "UPPER TRANSFORM IS EXECUTED: " << s18 << endl;
    transform(s18.begin(), s18.end(), s18.begin(), ::tolower);
    cout << "LOWER TRANSFORM IS EXECUTED: " << s18 << endl;
    
    return 0;
}

/* ======================================================================= */
/*
    Output: DECLARING 1: Vishal
            DECLARING 2: nnnnn
            Hello
            GETLINE EXECUTED: Hello
            APPEND IS EXECUTED: family
            ADDITION OF STRINGS IS EXECUTED: family
            CLEAR IS EXECUTED: 
            COMPARE IS EXECUTED: 0
            EMPTY IS EXECUTED: 0 1
            ERASE IS EXECUTED: ninpoop
            FIND IS EXECUTED: 3
            INSERT IS EXECUTED: ninlolcompoop
            SIZE IS EXECUTED: 10
            LENGTH IS EXECUTED: 10
            SUBSTR IS EXECUTED: poop
            STOI IS EXECUTED: 788
            TO_STRING IS EXECUTED: 7862
            SORT IS EXECUTED: dddffgghsss
            UPPER TRANSFORM IS EXECUTED: VISHAL
            LOWER TRANSFORM IS EXECUTED: vishal
*/