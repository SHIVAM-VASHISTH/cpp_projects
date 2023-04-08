#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number : " << endl;
    int n, ans = 1;
    cin >> n;

    for (int i = n; i > 0; i--) {
        ans *= i;
    }
    cout << ans;
    return 0;
}
