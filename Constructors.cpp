#include<iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;

    public:
        // Rectangle() {
        //     this->length = 1;
        //     this->breadth = 1;
        // }

        Rectangle(int length = 1, int breadth = 1) {
            setLength(length);
            setBreadth(breadth);
        }

        Rectangle(Rectangle &r) {
            this->length = r.length;
            this->breadth = r.breadth;
        }

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
    Rectangle r2(r1);
    cout << r1.area() << endl;
    cout << r2.area() << endl;
    return 0;
}