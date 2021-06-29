// My Solution
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 3 || n == 1) return true;
        if(n % 3 != 0 || n == 0) return false;
        return isPowerOfThree(n / 3);
    }
};

// Without Using Recursion
bool isPowerOfThree(int n){
    if(n > 1) while(n % 3 == 0) n /= 3;
    return n == 1;
}

// Without LOops or Log
class Solution {
public:
    int const Max3PowerInt = 1162261467;        // 3^19, 3^20 = 3486784401 > MaxInt32
    int const MaxInt32 = 2147483647;            // 2^31 - 1
    bool isPowerOfThree(int n) {
        if (n <= 0 || n > Max3PowerInt) return false;
        return Max3PowerInt % n == 0;
    }
};

// Using Log
class Solution {
public:
    bool isPowerOfThree(int n) {
        return fmod(log10(n)/log10(3), 1)==0;
    }
};
