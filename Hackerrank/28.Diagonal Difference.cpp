/*
    https://www.hackerrank.com/challenges/diagonal-difference/problem
*/

#include<stdio.h>
#include<math.h>
int main()
{   int n,i,j,s1=0,s2=0,diff=0;
    scanf("%d",&n);
    int a[n][n];
    for( i=0;i<n;i++){   
        for(j=0;j<n;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){    
        for(int j=0;j<n;j++){    
            if(i==j){
                s1+=a[i][j];    
            }
            if(j==n-1-i){
                s2+=a[i][j];    
            }
        }
    }
    diff=abs(s2-s1);
    printf("%d",diff);

    return 0;
}
