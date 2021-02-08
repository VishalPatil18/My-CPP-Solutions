#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int sum = 0;
    int x = n;

    while (x>0)
    {
        int lastDigit = x%10;
        sum += pow(lastDigit, 3);
        x /= 10;
    }

    if(sum == n) cout << n << " is an Armstrong Number\n";
    else cout << "No, " << n << " is not an Armstrong Number\n";
    
    return 0;
}

/*
    Input : 153
    Output: 153 is an Armstrong Number

    Input : 122
    Output: No, 122 is not an Armstrong Number 
*/