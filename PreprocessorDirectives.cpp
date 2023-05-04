#include<iostream>
using namespace std;

#define max(x, y) (x > y ? x : y)
#define msg(x) #x

#ifndef PI
    #define PI 3
#endif

int main()
{   
    cout << msg(what do you think you are?) << endl;
    cout << max(10, 12) << endl;
    return 0;
}