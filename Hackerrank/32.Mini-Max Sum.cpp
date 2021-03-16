/*
    https://www.hackerrank.com/challenges/mini-max-sum/problem
*/

#include<iostream>
using namespace std;
int main()
{   
    unsigned int i,temp=0;
    unsigned int a[5];
    unsigned int max,min;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
      long sum=0;
    for(i=0;i<5;i++){
        sum+=a[i];
    }
    //cout<<sum<<endl;
   for(int i=0;i<4;i++){
        if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;    
        }
        else{temp=a[i+1];}    
    }
    max=temp;
    cout<<sum-max<<" ";
    temp=0;
    for(int i=0;i<4;i++){
        if(a[i]<a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;    
        }    
        else{temp=a[i+1];}
    }
    min=temp;
    cout<<sum-min;
    //cout<<max<<" "<<min;
    return 0;
}
