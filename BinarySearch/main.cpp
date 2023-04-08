#include <iostream>

using namespace std;

int main()
{
    int A[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
    int low = 0, high = 9, key;

    cout << "Enter a key : ";
    cin >> key;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (A[mid] > key) {
            high = mid - 1;
        } else if (A[mid] < key) {
            low = mid + 1;
        } else {
            cout << A[mid] << " is at position " << mid;
            break;
        }
    }

    return 0;
}
