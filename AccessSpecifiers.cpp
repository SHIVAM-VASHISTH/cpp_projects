#include<iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;

    public:
        int area() {
            return length * breadth;
        }

        int perimeter() {
            return 2 * (length + breadth);
        }
};

int main()
{
    
    return 0;
}