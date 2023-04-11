#include<iostream>
using namespace std;

int search(int A[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (A[i] == key) return i;
    }
    return 0;
}

int main()
{
    int A[] = {1,2,3,4,5};
    cout << search(A, 5, 4) << endl;
    return 0;
}