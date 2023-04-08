#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number : " << endl;
    int n, count;
    cout << "n : " << n << " and count " << count << endl;
    cin >> n;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count > 0) cout << "Not a prime number " << count << endl;
    else cout << "Prime number";

    return 0;
