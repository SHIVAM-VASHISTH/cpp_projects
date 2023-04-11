#include<iostream>
using namespace std;

void funWithoutStaticVar() {
    int x = 0;
    int a = 5;
    x++;
    cout << "x - " << x << " a - " << a << endl;
}

void funWithStaticVar() {
    static int x = 0;
    int a = 5;
    x++;
    cout << "x - " << x << " a - " << a << endl;
}

int main()
{
    cout << "Calling funWithoutStaticVar()" << endl;
    funWithoutStaticVar();
    funWithoutStaticVar();
    funWithoutStaticVar();
    cout << "Calling funWithStaticVar" << endl;
    funWithStaticVar();
    funWithStaticVar();
    funWithStaticVar();
    return 0;
}