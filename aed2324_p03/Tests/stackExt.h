# include <iostream>
# include <stack>

using namespace std;

template <class T>
class StackExt {
	stack<T> values;
	stack<T> minimums;
public:
	StackExt() {};
	bool empty() const; 
	T& top();
	void pop();
	void push(const T& val);
	T& findMin();
};

//=============================================================================
// Exercise 3: StackExt class
//=============================================================================
//TODO
template <class T>
bool StackExt<T>::empty() const {
    return values.empty();
}

//TODO
template <class T>
T& StackExt<T>::top() {
    T* x = new T();
    if (values.empty()) throw "No element";
    else *x = values.first().retrieve();
    return *x;
}

//TODO
template <class T>
void StackExt<T>::pop() {
    values.remove(this->top());
}

//TODO
template <class T>
void StackExt<T>::push(const T& val) {
    values.insert(val, 0);
}

//TODO
template <class T>
T& StackExt<T>::findMin() {
    T* x = new T();
    int min = 99999;
    while(!values.empty()) {
        if(values.top() < min) {
            min = values.top();
            minimums.push(min);
            values.pop();
        }
    }
    return *x;
}
