#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two numbers : " << endl;
    int n, m;
    cin >> n >> m;

    while (m != n) {
        if (m > n) m = m - n;
        else if (n > m) n = n - m;
    }

    cout << "GDC : " << n;

    return 0;
}
