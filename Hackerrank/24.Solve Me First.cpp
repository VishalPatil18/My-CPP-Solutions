/*
    https://www.hackerrank.com/challenges/solve-me-first/problem
*/

#include<stdio.h>
int solvemefirst(int a,int b){
    int sum=a+b;
    return sum;
}

int main(){    
    int num1,num2;
    scanf("%d %d",&num1,&num2);

    int sum=solvemefirst(num1,num2);
    printf("%d",sum);
    return 0;
}
