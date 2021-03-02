/*
    https://www.hackerrank.com/challenges/2d-array/problem
*/

#include<stdio.h>
int main(){   
    int i,j;
    int max=0, z=0, s[16]={0};
    int a[6][6];
    for(i=0;i<6;i++){   
        for(j=0;j<6;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            s[z]=(a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]);
            z++;
        }
    }
    max=s[0];
    for(i=1;i<16;i++){
        if(s[i]>max)
            max=s[i];
    }
    printf("%d",max);
	return 0;
}