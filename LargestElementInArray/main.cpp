#include <iostream>
#include<array>
using namespace std;

int main()
{
    int arr[] = {4, 8, 68, 69, 5, 2, 7};

    int largest = INT_MIN;

    for (int i = 0; arr.size(); i++) {
        if (arr[i] > largest) largest = arr[i];
    }

    cout << largest;

    return 0;
}
