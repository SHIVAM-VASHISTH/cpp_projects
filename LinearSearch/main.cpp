#include <iostream>

using namespace std;

int main()
{
    int n = 10, input, arr[n];

    cout << "Enter numbers : " << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter a number you want to find : ";
    cin >> input;

    for (int i = 0; i < n; i++) {
        if (arr[i] == input) cout << "The number is at index " << i;
    }

    return 0;
}
