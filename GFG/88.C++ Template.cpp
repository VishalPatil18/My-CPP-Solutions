template <class T>
class minElement
{
    T y;
    
    public:
    minElement(T val){ y = val; }
    
    void check(T x){
        cout << ((x < y) ? x : y) << endl;
    }
};