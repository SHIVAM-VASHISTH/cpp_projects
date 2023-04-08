#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number : " << endl;
    int n, rev = 0;
    cin >> n;

    while (n > 0) {
        int r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }

    cout << rev;

    return 0;
}
