#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> v = {2, 4, 6, 8, 10};
    v.insert(20);
    v.insert(30);

    set<int>::iterator itr;

    cout << "using Iterator" << endl;
    for (itr = v.begin(); itr != v.end(); itr++) cout << *itr << endl;

    cout << "using for each" << endl;
    for (int x : v) cout << x << endl;

    return 0;
}