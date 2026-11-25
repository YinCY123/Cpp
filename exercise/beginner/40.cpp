#include <iostream>
using std::cout;
using std::cin;
using std::endl;

double calculateArea(double r)
{
    const double pi = 3.1415926;
    return pi * r * r;
}

int calculateArea(double width, double height)
{
    return width * height;
}


int main()
{
    cout << "The Area of Circle (" 
         << " Radius "
         << 5
         << ") = "
         << calculateArea(5.0) 
         << endl;
    
    cout << "The Area of a Rectangle ( 8 x 4) = " 
         << calculateArea(3.0,4.0) 
         << endl;

    return 0;
}
