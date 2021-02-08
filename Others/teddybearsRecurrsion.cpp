#include<stdio.h>

int bears(int n){
    int ans = 0;
    if(n == 42) return 1;
    else if(n < 42) return 0;
    
    else if(n % 5 == 0)
        ans = bears(n-42);

    if((n % 3 == 0 || n % 4 == 0) && ans == 0) {
        int digits[2];
        int x = n;
        for (int i = 0; i < 2; i++) {
            digits[i] = x % 10;
            x /= 10;
        }
        if(digits[0]*digits[1] != 0) ans = bears(n - (digits[0]*digits[1]));
    }

    if((n % 2 == 0) && ans == 0) ans = bears(n/2);

    return ans;
}

int main()
{
    int n;
    printf("Enter the number of teady bears you would like to give me: ");

    scanf("%d",&n);
    
    int output = bears(n);
    
    printf("%d\n", output);
    return 0;
}