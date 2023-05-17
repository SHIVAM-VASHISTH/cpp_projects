#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;
    friend ofstream &operator<<(ofstream &ofs, Student &s);
    friend ifstream &operator>>(ifstream &ifs, Student &s);
};

ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}

ifstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name >> s.roll >> s.branch;
    return ifs;
}

int main()
{
    Student s1;

    ifstream ifs("Student.txt");
    ifs >> s1;
    ifs.close();
    cout << s1.name << " " << s1.roll << " " << s1.branch << endl;
    return 0;
}