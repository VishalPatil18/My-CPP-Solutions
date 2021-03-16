/*
    https://www.hackerrank.com/challenges/staircase/problem
*/

#include<iostream>
using namespace std;
int main()
{   
    int n,i,j,k;
    cin>>n;

    for(i=0;i<n;i++){
        for(k=0;k<n-i-1;k++){
            cout<<" ";
        }
        for(j=n+1;j>n-i;j--){
            cout<<"#";
        }
        cout<<endl;
        }
    return 0;
}
