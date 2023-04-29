#include<iostream>
using namespace std;

class Student {
    public:
        int rollNo;
        string name;
        static int addNo;
        
        Student(string name) {
            addNo++;
            this->rollNo = addNo;
            this->name = name;
        }

        void display() {
            cout << "Student name is " << this->name << " and roll no is " << this->rollNo << endl;
        }
};

int Student::addNo = 0;

int main()
{   
    Student s1("Suresh"), s2("Mukesh");
    s1.display();
    s2.display();
    cout << Student::addNo << endl;
    return 0;
}