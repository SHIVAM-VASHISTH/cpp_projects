#include<iostream>
using namespace std;

class Base {
    public:
        void display() {
            cout << "Display of Base" << endl;
        }
};

class Derived:public Base {
    public:
        void display(int x) {
            cout << "Display of Derived" << endl;
        }  
};

int main()
{
    Derived b;
    b.Base::display();
    return 0;
}