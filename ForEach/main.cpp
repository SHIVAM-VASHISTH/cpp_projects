#include <iostream>

using namespace std;

int main()
{
    int arr[] = {2, 5, 1, 9, 8};

    for (auto &n : arr) {
        cout << ++n << " ";
    }

    cout << endl;

    for (auto n : arr) {
        cout << n << " ";
    }

    return 0;
}
