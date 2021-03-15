/*
    https://www.hackerrank.com/challenges/a-very-big-sum/problem
*/

#include<stdio.h>
int main()
{    int n,i;
    long int sum=0;
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    printf("%ld",sum);
    return 0;
}

