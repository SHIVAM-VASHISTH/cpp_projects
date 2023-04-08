#include<iostream>
using namespace std;

int add(int x, int y, int z = 0) {
    return x + y + z;
}

int main()
{
    cout << add(23, 4) << endl;
    return 0;
}