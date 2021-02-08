#include<bits/stdc++.h>
using namespace std;

/* ======================================================================= */

int linearSearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
        if(arr[i] == key) return i;
    return -1;
}

/* ======================================================================= */

int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n;
    while(start <= end) {
        int mid = (start + end)/2;
        
        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

/* ======================================================================= */

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};

    int size = 7;

    cout << linearSearch(arr, size, 20) << endl;
    cout << binarySearch(arr, size, 60) << endl;
    
    return 0;
}

/* ======================================================================= */

/*
    Output: 1
            5
*/