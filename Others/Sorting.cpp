#include<bits/stdc++.h>
using namespace std;

/* ======================================================================= */

// SELECTION SORT - find the min element in the unsorted array and swap it with element at beginning
void selectionSort(int arr[], int n)
{
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                // Swapping the two numbers
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

/* ======================================================================= */

// BUBBLE SORT - repeatedly swap two adjacent elements if they are in wrong order
void bubbleSort(int arr[], int n){
    int counter = 1;
    while(counter < n){
        for(int i=0; i<n-counter; i++){
            if(arr[i] > arr[i+1]){
                // swapping the two numbers
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
}

/* ======================================================================= */

// INSERTION SORT - insert an element from unsorted array to its correct positiont in sorted array
void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

/* ======================================================================= */

int main()
{
    int arr_selectionSort[7] = {20, 30, 50, 60, 10, 23, 56};
    int arr_bubbleSort[7] = {20, 30, 50, 60, 10, 23, 56};
    int arr_insertionSort[7] = {20, 30, 50, 60, 10, 23, 56};

    selectionSort(arr_selectionSort, 7);
    bubbleSort(arr_bubbleSort, 7);
    insertionSort(arr_insertionSort, 7);

    for(int x: arr_selectionSort) cout << x << " ";
    cout << endl;

    for(int x: arr_bubbleSort) cout << x << " ";
    cout << endl;

    for(int x: arr_insertionSort) cout << x << " ";
    cout << endl;

    return 0;
}

/* ======================================================================= */

/*
    Output: 10 20 23 30 50 56 60
            10 20 23 30 50 56 60
            10 20 23 30 50 56 60
*/