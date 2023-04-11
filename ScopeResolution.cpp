#include<iostream>
using namespace std;

int x = 40;

int main()
{
    int x = 13;
    cout << x << endl;
    cout << ::x << endl;
    cout << x + ::x << endl;
    return 0;
}