#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("my.txt");

    if(ifs.is_open()) cout << "File is opened" << endl;

    string name;
    int roll;
    string branch;

    ifs >> name >> roll >> branch;
    ifs.close();

    cout << "Name " << name << endl;
    cout << "Roll " << roll << endl;
    cout << "Brach " << branch << endl;
    return 0;
}