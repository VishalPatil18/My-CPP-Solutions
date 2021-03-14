/*
    https://www.hackerrank.com/challenges/simple-array-sum/problem
*/

#include<stdio.h>
int main()
{    int n=0,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
        }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}
