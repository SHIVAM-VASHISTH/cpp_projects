#include<iostream>
using namespace std;

int division(int x, int y) {
    if (y == 0) throw 1;
    return x / y;
}

int main()
{
    int x = 10, y = 2, z;

    try {
        z = division(x, y);
        cout << z << endl;
    } catch (int e) {
        cout << "Division by Zero " << e << endl;
    }
    cout << "Bye !" << endl;
    return 0;
}