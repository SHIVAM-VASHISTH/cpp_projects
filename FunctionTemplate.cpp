#include<iostream>
using namespace std;

template<class T>

T maxim(T i, T j) {
    return i > j ? i : j;
} 

int main()
{
    cout << maxim(2, 5) << endl;
    cout << maxim(2.5, 5.5) << endl;
    cout << maxim(2.5f, 3.5f) << endl;
    
    return 0;
}