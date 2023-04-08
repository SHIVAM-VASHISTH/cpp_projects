#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number : " << endl;
    int n, sum;
    cin >> n;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (n == sum) cout << "Perfect Number";
    else cout << "Not a Perfect Number";

    return 0;
}
