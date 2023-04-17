#include<iostream>
using namespace std;

class Rectangle {
    public:
        int length;
        int breadth;

        int area() {
            return length * breadth;
        }

        int perimeter() {
            return 2 * (length + breadth);
        }
};

int main()
{
    // creating rectangle pointer in stack memory
    Rectangle r1;
    Rectangle *ptr1 = &r1;
    ptr1->length = 10;
    ptr1->breadth = 5;
    cout << "Area of r1 - " << ptr1->area() << endl;
    cout << "Perimeter of r1 - " << ptr1->perimeter() << endl;

    cout << "------------------------" << endl;

    // creating rectangle pointer in heap memory
    Rectangle *ptr2 = new Rectangle();
    ptr2->length = 20;
    ptr2->breadth = 10;
    cout << "Area of r2 - " << ptr2->area() << endl;
    cout << "Area of r2 - " << ptr2->perimeter() << endl;
    return 0;
}