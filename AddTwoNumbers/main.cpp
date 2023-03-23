#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    std::cout<<"Enter two numbers : ";
    std::cin>>a>>b;
    if (b==0) std::cout<<"Division by zero not possible"<<std::endl;
    else {
        c=a/b;
        std::cout<<c;
    }

    return 0;
}
