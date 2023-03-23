#include <iostream>

using namespace std;

int main()
{
    cout << "Menu\n" << endl;
    cout << "1. Add\n" << "2. Sub\n" << "3. Mul\n" << "4. Div\n";

    int option;
    cout << "Choose any one option : ";
    cin >> option;

    int a, b, c;
    cout << "Enter any two numbers : ";
    cin >> a >> b;

    switch (option) {
        case 1: c = a + b;
                cout << "Additon of " << a << " + " << b << " is " << c;
                break;
        case 2: c = a - b;
                cout << "Subtraction of " << a << " - " << b << " is " << c;
                break;
        case 3: c = a * b;
                cout << "Multiplication of " << a << " * " << b << " is " << c;
                break;
        case 4: c = a / b;
                cout << "Division of " << a << " / " << b << " is " << c;
                break;
        default: cout << "Invalid Option";
    }
    return 0;
}
