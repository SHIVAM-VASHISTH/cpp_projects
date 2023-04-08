#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main()
{
    int x = 3, y = 5, z = 5;
    cout << "The answer is add(x, y) = " << add(x, y) << endl;  
    cout << "The answer is add(x, y, z) = " << add(x, y, z) << endl;  
    return 0;
}