#include<iostream>
using namespace std;

class Outer {
    private:
        class Inner {
            public:
                void display() {
                    cout << "Display of Inner Class" << endl;
                }
        };
        Inner i;

    public:
        void fun() {
            i.display();
        }
};

int main()
{
    Outer o;
    o.fun();
    return 0;
}