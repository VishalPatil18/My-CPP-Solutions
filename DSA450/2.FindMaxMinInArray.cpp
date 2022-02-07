/*** ################# 1 - My Solution(max 3 comparisons) ################# ***/

class Solution{
  public:
    int middle(int A, int B, int C){
        if(A > B){
            if(A < C) return A;
            else{
                if(C > B) return C;
                else return B;
            }
        }
        else if(A < B){
            if(B < C) return B;
            else{
                if(C > A) return C;
                else return A;
            }
        }
    }
};

/*** ################# 2 - max 2 comparisons solution ################# ***/

int middle(int A, int B, int C){
    int x = A-B;                        // x -> +ve implies A > B and x -> -ve implies A < B
    int y = B-C;                        // y -> +ve implies B > C and y -> -ve implies B < C
    int z = C-A;                        // z -> +ve implies C > A and z -> -ve implies C < A
    if(x*y > 0) return B;               // this implies that A is greatest and C is smallest making B the middle one
    if(y*z > 0) return C;               // this implies that B is greatest and A is smallest making C the middle one
    else return A;                      // when neither B nor C is the middle one
}

/*** ################# 3 - Tournament Method ################# ***/

#include<iostream> 
using namespace std; 
  
// structure is used to return two values from minMax()  
struct Pair { 
    int min, max; 
};

struct Pair getMinMax(int arr[], int low, int high) { 
    struct Pair minmax, mml, mmr;      
    int mid;
    
    if(low == high) {                                   // If there is only on element  
        minmax.max = arr[low]; 
        minmax.min = arr[low];      
        return minmax; 
    }
     
    if(high == low + 1) {                               // If there are two elements 
        if (arr[low] > arr[high]) { 
            minmax.max = arr[low]; 
            minmax.min = arr[high]; 
        }  
        else { 
            minmax.max = arr[high]; 
            minmax.min = arr[low]; 
        }  
        return minmax; 
    } 
    
    mid = (low + high) / 2;                             // If there are more than 2 elements  
    mml = getMinMax(arr, low, mid); 
    mmr = getMinMax(arr, mid + 1, high);  
    
    if (mml.min < mmr.min) minmax.min = mml.min;        // Compare minimums of two parts 
    else minmax.min = mmr.min;      

    if (mml.max > mmr.max) minmax.max = mml.max;        // Compare maximums of two parts 
    else minmax.max = mmr.max;      
      
    return minmax; 
} 

int main() 
{ 
    int arr[] = { 1000, 11, 445, 1, 330, 3000 }; 
    int arr_size = 6; 

    struct Pair minmax = getMinMax(arr, 0, arr_size - 1); 
                               
    cout << "Minimum element is " << minmax.min << "\n"; 
    cout << "Maximum element is " << minmax.max << "\n"; 
           
    return 0; 
} 