#include<bits/stdc++.h>
using namespace std;

// Reverse function to reverse the answer
int reverse(int n)
{
    int ans = 0;
    while(n > 0) {
        int lastDigit = n % 10;
        ans = ans * 10 + lastDigit;
        n /= 10;
    }
    return ans;
}

int addBinary(int a, int b)
{
    int ans = 0, prevCarry = 0;
    
    while(a > 0 && b > 0) {
        // case 1 - when both digits are 0
        if (a%2 == 0 && b%2 == 0) {
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        }
        // case 2 - when one digit is 0 and the other digit is 1
        else if((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0)) {
            if(prevCarry == 1) {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        // case 3 - when both digits are 1
        else {
            ans = ans * 10 + prevCarry;
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }

    // if digits in a > digits in b
    while(a > 0) {
        if(prevCarry == 1) {
            if(a%2 == 1) {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else {
            ans = ans * 10 + (a % 2);
        }
        a /= 10;
    }
    // if digits in b > digits in a
    while(b > 0) {
        if(prevCarry == 1) {
            if(b%2 == 1) {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else {
            ans = ans * 10 + (b % 2);
        }
        b /= 10;
    }
    // if we have some prevcarry left we need to add it furthur
    if(prevCarry == 1) ans = ans * 10 + 1;

    // as the answer we get will be in reverse form therefore we will reverse it to make it correct
    ans = reverse(ans);
    return ans;
}

int main()
{
    int a, b; cin >> a >> b;

    cout << addBinary(a, b) << endl;
    
    return 0;
}