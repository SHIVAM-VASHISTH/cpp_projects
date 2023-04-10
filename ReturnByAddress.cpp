#include<iostream>
using namespace std;

int * fun() {
    int *p = new int[5];
    for (int i = 0; i < 5; i++) {
        p[i] = 5 * (i + 1);
    }
    return p;
}

int main()
{
    int *p = fun();
    cout << *p << endl;
    for (int i = 0; i < 5; i++) {
        cout << p[i] << " ";
    }
    return 0;
}