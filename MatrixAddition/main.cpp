#include <iostream>

using namespace std;

int main()
{
    int A[2][3] = {{2, 5, 9}, {7, 3, 6}}, B[2][3] = {{6, 3, 9}, {9, 5, 2}}, C[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
