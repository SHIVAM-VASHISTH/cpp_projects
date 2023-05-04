#include<iostream>
using namespace std;

class Demo {
    public:
        int x = 10;
        int y = 20;

        void Display() const {
            cout << x << " " << y << endl;
        }
};

int main()
{
    Demo d;
    d.Display();
    return 0;
}