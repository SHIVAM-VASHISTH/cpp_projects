#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 5, i = 5;

    if (a > b && i++ <= b) {
        cout<<"inside if"<<endl;
    }

    cout<<i<<endl;
    return 0;
}
