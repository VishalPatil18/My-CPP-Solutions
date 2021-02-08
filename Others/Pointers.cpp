#include<bits/stdc++.h>
using namespace std;

/* ======================================================================= */

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* ======================================================================= */    

int main()
{
    int arr[] = {10, 20, 30};
    cout << *arr << endl;
    
    /* ======================================================================= */
    
    // Print all elements of arr using a pointer
    int *ptr = arr;
    for(int i=0; i<3; i++){
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;

    /* ======================================================================= */
    
    // Printing all elements of arr using arr pointer
    for(int i=0; i<3; i++){
        cout << *(arr+i) << " ";
    }
    cout << endl;

    /* ======================================================================= */
    
    // Passing pointers to a function    
    int a = 2, b = 4;
    int *aptr = &a;
    int *bptr = &b;

    cout << "Before swapping a = " << a << " b = " << b << endl;
    swap(aptr, bptr);
    cout << "After swapping a = " << a << " b = " << b << endl;

    /* ======================================================================= */
    
    
    return 0;
}

/* ======================================================================= */
/*
    Output: 10
            10 20 30 
            10 20 30 
            Before swapping a = 2 b = 4
            After swapping a = 4 b = 2
*/