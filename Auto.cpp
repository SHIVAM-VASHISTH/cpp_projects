#include <iostream>
using namespace std;

float fun()
{
    return 2.34f;
}

int main()
{
    auto x = 2 * 5.7 + 'a';
    cout << x << endl;
    float y = fun();
    cout << y << endl;
    
    decltype(y) z = 12.3;
    cout << z << endl;
    return 0;
}