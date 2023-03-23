#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r1, r2, a, b, c;
    cout << "Enter a, b and c : " << endl;

    cin >> a >> b >> c;
    r1=(-b+sqrt(b*b-4.0*a*c))/(2.0*a);
    r2=(-b-sqrt(b*b-4.0*a*c))/(2.0*a);

    cout << "r1: " << r1 << " & r2: " << r2;
    return 0;
}
