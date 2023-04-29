#include<iostream>
using namespace std;

class Shape {
    public:
        virtual float area() = 0;
        virtual float perimeter() = 0;
};

class Rectangle: public Shape {
    private:
        float l;
        float b;

    public:
        Rectangle(float l = 1, float b = 1) {
            this->l = l;
            this->b = b;
        }
        float area() {
            return this->l * this->b;
        }
        float perimeter() {
            return 2 * (this->l + this->b);
        }
};

class Circle: public Shape {
    private:
        float r;

    public:
        Circle(float r = 1) {
            this->r = r;
        }
        float area() {
            return 3.1425 * this->r * this->r;
        }
        float perimeter() {
            return 2 * 3.1425 * this->r;
        }
};

int main()
{
    Shape *s = new Rectangle(10, 5);
    cout << "Area of Rectangle - " << s->area() << endl;
    cout << "Perimeter of Rectangle - " << s->perimeter() << endl;

    s = new Circle(10);
    cout << "Area of Circle - " << s->area() << endl;
    cout << "Perimeter of Circle - " << s->perimeter() << endl; 
    return 0;
}