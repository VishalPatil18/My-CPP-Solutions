// My Solution
class Solution {
public:
    bool isHappy(int n) {
        int x = n;
        while(true){
            int sum = 0, noDigits = 0;
            while(n > 0){
                int digit = n % 10;
                n /= 10;
                sum += digit*digit;
                noDigits++;
            }
            n = sum;
            if(n == 1) return true;
            if(n == 37) return false;
        }
    }
};

// Using 2 pointer approach
int digitSquareSum(int n) {
    int sum = 0, tmp;
    while(n){
        tmp = n % 10;
        sum += tmp * tmp;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int slow = n, fast = n;
    do {
        slow = digitSquareSum(slow);
        fast = digitSquareSum(fast);
        fast = digitSquareSum(fast);
        if(fast == 1) return 1;
    } while(slow != fast);
    return 0;
 }

 // Using HashSet
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> tmp;
        while(n != 1){
            if(tmp.find(n) == tmp.end()) tmp.insert(n);
            else return false;
            
            int sum = 0;
            while(n != 0){
                sum += pow(n % 10,2);
                n = n / 10;
            }
            n = sum;
        }
        return true;
    }
};

// Other Solution
bool isHappy(int n) {
    while(n>6){
        int next = 0;
        while(n){ 
            next += (n%10)*(n%10);
            n /= 10;
        }
        n = next;
    }
    return n==1;
}