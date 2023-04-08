#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number : " << endl;
    int n, sum, temp;
    cin >> n;

    temp = n;

    while (n > 0) {
        int r = n % 10;
        sum += r * r * r;
        n = n / 10;
    }

    if (sum == temp) cout << "Number is armstrong";
    else cout << "Number is not armstrong";

    return 0;
}
