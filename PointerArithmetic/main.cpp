#include <iostream>

using namespace std;

int main()
{
    int A[] = {2, 4, 6, 8, 10, 12};
    int *p = A;

    cout << A << endl;

    for (int i = 0; i < 5; i++) {
        cout << (A + i) << " ";
    }

    return 0;
}
