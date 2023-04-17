#include<iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;

    public:
        void setLength(int length) {
            if (length < 0) this->length = 1;
            else this->length = length;
        }

        int getLength() {
            return this->length;
        }

        void setBreadth(int breadth) {
            if (breadth < 0) this->length = 1;
            else this->breadth = breadth;
        }

        int getBreadth() {
            return this->breadth;
        }

        int area() {
            return length * breadth;
        }

        int perimeter() {
            return 2 * (length + breadth);
        }
};

int main()
{
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(5);
    cout << "area of r1 is " << r1.area() << endl;   
    return 0;
}