#include<bits/stdc++.h>
using namespace std;

/* ======================================================================= */

int octalToDecimal(int n)
{
    int ans = 0;
    int x = 1;

    while(n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }

    return ans;    
}
/*
    Input : 137
    Output: 95
*/

/* ======================================================================= */

int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;

    while(n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }

    return ans;    
}
/*
    Input : 101101
    Output: 45
*/

/* ======================================================================= */

int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size();

    for(int i=s-1; i>=0; i--) {
        if(n[i] >= '0' && n[i] <= '9') ans += x*(n[i] - '0');
        else if(n[i] >= 'A' && n[i] <= 'F') ans += x*(n[i] - 'A' + 10);

        x *= 16;
    }

    return ans;    
}
/*
    Input : 1CF
    Output: 463
*/

/* ======================================================================= */

int decimalToBinary(int n)
{
    int ans = 0;
    int x = 1;

    while (x < n) x *= 2;
    

    while(x > 0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 2;
        ans = ans*10 + lastDigit;
    }

    return ans;    
}
/*
    Input : 45
    Output: 101101
*/

/* ======================================================================= */

int decimalToOctal(int n)
{
    int ans = 0;
    int x = 1;

    while (x < n) x *= 8;
    

    while(x > 0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 8;
        ans = ans*10 + lastDigit;
    }

    return ans;    
}
/*
    Input : 95
    Output: 137
*/

/* ======================================================================= */

string decimalToHexadecimal(int n)
{
    string ans = "";
    int x = 1;

    while (x < n) x *= 16;
    

    while(x > 0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 16;

        if(lastDigit <= 9) ans = ans + to_string(lastDigit);
        else{
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }

    return ans;    
}
/*
    Input : 463
    Output: 1CF
*/

/* ======================================================================= */

int main()
{
    int n; cin >> n;

    cout << decimalToHexadecimal(n) << endl;
    
    return 0;
}

