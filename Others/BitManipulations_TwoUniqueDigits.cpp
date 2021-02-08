#include<bits/stdc++.h>
using namespace std;

int setBit(int n, int pos) {
    return (n & (1 << pos)) != 0;
}

int unique(int arr[], int n) {
    int xorsum=0;
    for(int i=0; i<n; i++) xorsum ^= arr[i];
    
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    for(int i=0; i<n; i++) 
        if(setBit(arr[i], pos-1)){
            newxor ^= arr[i];
        }

    return xorsum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    cout << unique(arr, 7) << endl;

    return 0;
}

/* ======================================================================= */
/*
    Output: 4
*/