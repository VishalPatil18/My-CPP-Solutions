/*
    https://www.hackerrank.com/challenges/array-left-rotation/problem
*/

#include<stdio.h>
int main()
{    int n,d,i,j;
    scanf("%d %d",&n,&d);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<d;i++)
    {    int temp;
        temp=a[0];
        for(j=1;j<n;j++)
        {
            a[j-1]=a[j];
        }
        a[n-1]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
} 

