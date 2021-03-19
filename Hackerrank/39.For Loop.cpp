/*
    https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
*/

#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int arr[n-m+1];
    for(int i=0 ; i <= (n-m) ; i++){
        arr[i] = m+i;
        }
    for(int i=0 ; i <= (n-m) ; i++){
        if( arr[i] <= 9){
            if(arr[i] == 1){
                cout<<"one"<<endl;
                }
            else if(arr[i] == 2){
                cout<<"two"<<endl;
                }
            else if(arr[i] == 3){
                cout<<"three"<<endl;
                }
            else if(arr[i] == 4){
                cout<<"four"<<endl;
                }
            else if(arr[i] == 5){
                cout<<"five"<<endl;
                }
            else if(arr[i] == 6){
                cout<<"six"<<endl;
                }
            else if(arr[i] == 7){
                cout<<"seven"<<endl;
                }
            else if(arr[i] == 8){
                cout<<"eight"<<endl;
                }
            else if(arr[i] == 9){
                cout<<"nine"<<endl;
                }
            }
        else if(arr[i] > 9){
            if(arr[i] % 2 == 0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
    }
    return 0;
}

