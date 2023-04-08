#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number : " << endl;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cout << i <<  " ";
    }

    return 0;
}
