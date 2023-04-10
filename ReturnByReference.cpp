#include<iostream>
using namespace std;

int & fun(int &x) {
    int &b = x;
    return b;
}

int main()
{
    int a = 10;
    fun(a) = 25;
    cout << a << endl;
    return 0;
}