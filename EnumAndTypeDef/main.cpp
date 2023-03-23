#include <iostream>

using namespace std;

enum day {mon=1,tue,wed,thu,fri,sat,sun};

typedef int marks;

int main()
{
    marks m1, m2;

    m1=50;
    m2=90;
    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m1+m2<<endl;

    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    return 0;
}
