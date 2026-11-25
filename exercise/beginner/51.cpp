#include <iostream>
using std::cout;
using std::endl;
using std::cin;

class Rectangle{
    double width;
    double length;

    public:
        Rectangle(double width = 1.0, double length = 1.0){
            this -> width = width;
            this -> length = length;
        }

        double area(){
            return width * length;
        }
};

int main()
{
    Rectangle r1;
    Rectangle r2(12, 4);
    cout << "Default Rectangle created (1 x 1).\n" 
         << "R2 Area: "
         << r1.area() 
         << endl;

    cout << "Custom Rectangle created (12 x 4).\n"
         << "R1 Area: "
         << r2.area()
         << endl;

    return 0;
}
