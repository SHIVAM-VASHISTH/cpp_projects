#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 12, y = 32;
    swap(x, y);
    cout << "x : " << x << " and y : " << y;
    return 0;
}