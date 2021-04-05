/*
    https://www.hackerrank.com/challenges/c-class-templates/problem
*/

template <class T>
class AddElements {
    public:
	T element;

    AddElements(T arg) {
        element=arg;
    }

    T add(T x) {
        return element+x;
    }

    T concatenate(T x) {
        return element+x;
    }
};