// My Solution
class Solution{
public:
    bool isLucky(int n) {
        static int counter = 2;
        if(counter > n) return true;
        else if(n%counter == 0) return false;
        
        int next_position = n - (n/counter);
        counter++;
        return isLucky(next_position);
    }
};

// Without Recursion
public static boolean isLucky(int n)
{
    for(int i=2; i<=n; i++){
        if(n%i == 0) return false;
        n -= n/i;
    }
    return true;
}