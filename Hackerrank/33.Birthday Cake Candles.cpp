/*
    https://www.hackerrank.com/challenges/birthday-cake-candles/problem
*/

#include<iostream>
using namespace std;
int main()
{   
       int n,i,max=0,temp=0,sum=0;
       cin>>n;
       int a[n];
       for(i=0;i<n;i++){
           cin>>a[i];
       }
       for(i=0;i<n-1;i++){
        if(a[i]>temp){
            temp=a[i];    
            i++;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==temp){
            sum+=1;
        }    
    }
    cout<<sum;

    return 0;
}

