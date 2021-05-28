/*
    Question: Write an efficient program to count number of 1s in binary representation of an integer. 1 is also called a set bit of a number.
*/

// 1. MY SOLUTION
#include<bits/stdc++.h> 
using namespace std;

class Solution
{
    public:
    int setBits(int N)
    {
        // calculating each digit of binary and finding how many of them are 1
        long long unsigned int x = 1;
        int ans = 0;
        while(x < N) x *= 2;
        
        while(x > 0) {
            int lastDigit = N/x;
            N -= lastDigit * x;
            x /= 2;
            if(lastDigit == 1) ans++;
        }
        return ans;
    }
};

int main()
{
    int t; cin >> t;
    while (t--) {
        int N; cin >> N;
        
        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

/* ==================================================================================== */

// 2. Simple Method: Loop through all bits in an integer, check if a bit is set and if it is then increment the set bit count.

#include <bits/stdc++.h> 
using namespace std; 

/* Function to get no of set bits in binary representation of positive integer n */
unsigned int countSetBits(unsigned int n) 
{ 
	unsigned int count = 0; 
	while (n) { 
		count += n & 1; 
		n >>= 1; 
	} 
	return count; 
} 

int main() 
{ 
	int i = 9; 
	cout << countSetBits(i); 
	return 0; 
}

/* ==================================================================================== */

// 3. Recursive solution:
#include <bits/stdc++.h> 
using namespace std; 

// recursive function to count set bits 
int countSetBits(int n) 
{
	if (n == 0) return 0;
	else return (n & 1) + countSetBits(n >> 1); 
} 

int main() 
{
	int n = 9; 
	cout << countSetBits(n);
	return 0; 
}

/* ==================================================================================== */

// 4. Brian Kernighan’s Algorithm: (BEST SOLUTION)
/*
    Subtracting 1 from a decimal number flips all the bits after the rightmost set bit(which is 1) including the rightmost set bit.
    for example :
    10 in binary is 00001010, 9 in binary is 00001001, 8 in binary is 00001000, 7 in binary is 00000111
    
    So if we subtract a number by 1 and do bitwise & with itself (n & (n-1)), we unset the rightmost set bit. If we do n & (n-1) in a loop and count the no of times loop executes we get the set bit count.
    The beauty of this solution is the number of times it loops is equal to the number of set bits in a given integer. 
    Steps :
        1. Initialize count: = 0
        2. If integer n is not zero
            (a) Do bitwise & with (n-1) and assign the value back to n
                n: = n&(n-1)
            (b) Increment count by 1
            (c) go to step 2
        3. Else return count

    Time Complexity: O(logn)
*/

#include <iostream> 
using namespace std; 
class gfg
{
    public: 
	unsigned int countSetBits(int n) 
	{ 
		unsigned int count = 0; 
		while (n) { 
			n &= (n - 1); 
			count++; 
		} 
		return count; 
	} 
}; 

int main() 
{ 
	gfg g; 
	int i = 9; 
	cout << g.countSetBits(i); 
	return 0; 
} 

// Recursive approach to find the number of set bits using Brian Kernighan’s Algorithm 
#include <bits/stdc++.h> 
using namespace std; 

// recursive function to count set bits 
int countSetBits(int n) 
{ 
	// base case 
	if (n == 0) return 0; 
	else return 1 + countSetBits(n & (n - 1)); 
} 

int main() 
{ 
	int n = 9;
    cout << countSetBits(n); 

	return 0; 
} 

/* ==================================================================================== */

// 5. Using Lookup table: We can count bits in O(1) time using lookup table.

#include <bits/stdc++.h> 
using namespace std; 

int BitsSetTable256[256]; 

// Function to initialise the lookup table 
void initialize() 
{  
	BitsSetTable256[0] = 0;                     // To initially generate the table algorithmically
	for (int i = 0; i < 256; i++) 
        BitsSetTable256[i] = (i & 1) + BitsSetTable256[i / 2];
} 

// Function to return the count of set bits in n 
int countSetBits(int n) 
{ 
	return (BitsSetTable256[n & 0xff] + BitsSetTable256[(n >> 8) & 0xff] + BitsSetTable256[(n >> 16) & 0xff] + BitsSetTable256[n >> 24]); 
} 

int main() 
{
	initialize();                   // Initialise the lookup table
	int n = 9; 
	cout << countSetBits(n); 
} 

/* ==================================================================================== */

// 6. In GCC, we can directly count set bits using __builtin_popcount(). So we can avoid a separate function for counting set bits. 

#include <iostream> 
using namespace std; 

int main() 
{ 
	cout << __builtin_popcount(4) << endl; 
	cout << __builtin_popcount(15); 

	return 0; 
} 

/* ==================================================================================== */
