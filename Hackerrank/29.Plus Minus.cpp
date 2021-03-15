/*
    https://www.hackerrank.com/challenges/plus-minus/problem
*/

#include<stdio.h>
int main()
{   
    int n,i;
    float p=0,m=0,z=0;

    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            p+=1;
        }
        else if(a[i]<0){
            m+=1;
        }
        else{
            z+=1;
        }
    }
    p=p/n;
    m=m/n;
    z=z/n;

    printf("%f\n%f\n%f\n",p,m,z);
    
    return 0;
}
