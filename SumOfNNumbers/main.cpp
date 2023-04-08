#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number : " << endl;
    int n, sum;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
