/*
    https://www.hackerrank.com/challenges/compare-the-triplets/problem
*/

#include<stdio.h>
int main()
{    int i,j;
    int a[3];
    for(i=0;i<3;i++){
        scanf("%d ",&a[i]);
    }

    int b[3];
    for(i=0;i<3;i++){
        scanf("%d ",&b[i]);
    }

    int s[2]={0};
    for(i=0;i<3;i++){
        if(a[i]>b[i]){
                s[0]+=1;
        }
        else if(a[i]<b[i]){
                s[1]+=1;
        }
        else if(a[i]=b[i]){
            s[0]+=0;
            s[1]+=0;
            }
    }
    for(j=0;j<2;j++){
        printf("%d ",s[j]);
    }
    return 0;
}
