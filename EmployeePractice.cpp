#include<iostream>
using namespace std;

class Employee {
    private:
        int eid;
        string employeeName;
    
    public:
        Employee(int eid, string employeeName) {
            this->eid = eid;
            this->employeeName = employeeName;
        }

        int getEid() {
            return this->eid;
        }

        void setEid(int eid) {
            this->eid = eid;
        }

        string getEmployeeName() {
            return this->employeeName;
        }

        void setEmployeeName(string employeeName) {
            this->employeeName = employeeName;
        }
};

class FullTimeEmployee: public Employee {
    private:
        int salary;

    public:
        FullTimeEmployee(int eid, string employeeName, int salary):Employee(eid, employeeName) {
            this->salary = salary;
        }

        void setSalary(int salary) {
            this->salary = salary;
        }

        int getSalary() {
            return this->salary;
        }
};

class PartTimeEmployee: public Employee {
    private:
        int wages;

    public:
        PartTimeEmployee(int eid, string employeeName, int wages):Employee(eid, employeeName) {
            this->wages = wages;
        }

        void setWages(int wages) {
            this->wages = wages;
        }

        int getWages() {
            return this->wages;
        }
};

int main()
{
    FullTimeEmployee fte(1, "Ramesh Chaddha", 134324);
    PartTimeEmployee pte(2, "Suresh Khanna", 700);

    cout << "Full Time Employee " << fte.getEmployeeName() << " salary is " << fte.getSalary() << endl;
    cout << "Part Time Employee " << pte.getEmployeeName() << " wages are " << pte.getWages() << endl;
    return 0;
}