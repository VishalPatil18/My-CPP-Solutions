/* Fork Cpp Module 1 */

// 6. GetLine and Ignore
#include <iostream>
using namespace std;

// Function prototype
void getLineAndIgnore();

// Function to take input of string using getline
void getLineAndIgnore(){
    
    string a, d;
    int b;
   
    // Your code here
    getline(cin, a);
    cin >> b;
    cin.ignore();
    
    getline(cin, d);
   
    cout << a << endl;
    
    cout << b << endl;
        
    cout << d << endl;
}

int main()
{
    
    int t;							// Number of testcase input
    cin >> t;
    cin.ignore(); 					//Ignoring the newline so it isn't consumed by getline. Read about it!!
    while(t--){
        getLineAndIgnore();   
    }
   
    return 0;
}

/* ==================================================================================== */
// 7. Learning to be precise
#include <bits/stdc++.h>
using namespace std;

void precise(float a, float b) {
    float c = a/b;						// perform a/b
    
    cout << c /*output the result of a/b here*/ << " " << 
         setprecision(3) /*use setprecision(3) here*/ << fixed/*use fixed here*/ <<
         c /*Output c here*/ << endl;
    
    cout<<endl;
}

void precise(float , float );			//prototype

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b;
	    cin >> a >> b; 					//Taking input of a and b in floating types
	    precise(a,b);
	    
	}
	return 0;
}

/* ==================================================================================== */
// 8. Learning Macros 
#include <bits/stdc++.h>
#define MULTI(a,b) (a*b) 	// The multiplication macro function.
/*Whenever MULTI(a,b) is encountered, it is replaced by (a*b) during the preprocessing stage*/

using namespace std;

void macros(int a,int b);

void macros(int a,int b) {
    cout << MULTI(a, b);
    cout << endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b; 				//Input a and b
	    macros(a,b);
	    
	}
	return 0;
}

/* ==================================================================================== */
// 12. Bitwise Operators 
#include <iostream>
using namespace std;

void bitWiseOperation(int, int, int);

void bitWiseOperation(int a, int b, int c) {
    int x = (a^a);
    int y = (c^b);
    int z = (a&b);
    int w = (c|x);
    int u = (~y);
    
    cout << x << endl << y << endl << z << endl << w << endl << u << endl;
}

int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        int a, b, c;
    	cin >> a >> b >> c;
    	
        bitWiseOperation(a, b, c);
    }
	
	return 0;
}

/* ==================================================================================== */
