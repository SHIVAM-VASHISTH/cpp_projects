#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    int *p;
    p = &x;
    cout << *p << endl;
    return 0;
}