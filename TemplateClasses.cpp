#include<iostream>
using namespace std;

template<class T>
class Stack {
    private:
        T *stk;
        int top;
        int size;
    
    public:
        Stack(int size) {
            this->size = size;
            this->top = -1;
            stk = new T[this->size];
        }
        void push(T x);
        T pop();
        void display();
};

template<class T>
void Stack<T>::push(T x) {
    if (top == size - 1) cout << "Stack if full";
    else {
        top++;
        stk[top] = x;
    }
}

template<class T>
T Stack<T>::pop() {
    T x = 0;
    if (top == -1) cout << "Stack is Empty";
    else {
        x = stk[top];
        top--;
    }
    return x;
}

template<class T>
void Stack<T>::display() {
    int count = top;
    while (count != -1) {
        cout << stk[count] << endl;
        count--;
    }
    cout << "--------" << endl;
}

int main()
{
    Stack<float> stk(10);
    stk.push(5.6);
    stk.push(4);
    stk.push(3);
    stk.push(2);
    stk.push(1);
    stk.display();
    stk.pop();
    stk.display();
    return 0;
}