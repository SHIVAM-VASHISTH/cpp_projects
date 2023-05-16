#include <iostream>
using namespace std;

// Restricts inheritance and restricts overrides of a function
class Parent
{
    virtual void show() final
    {
    }
};

class Child : Parent
{
    
};

int main()
{

    return 0;
}