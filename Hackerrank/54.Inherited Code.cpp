/*
    https://www.hackerrank.com/challenges/inherited-code/problem
*/

class BadLengthException {
    private: 
        int n;
    public:
        BadLengthException(int errornumber) {
            n = errornumber;
        }
    
        int what() {
            return n;
        }
};
