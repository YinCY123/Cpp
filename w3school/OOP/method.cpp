#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

// =================

// class MyClass{
//     public:
//         void myMethod();
// };

// void MyClass::myMethod()
// {
//     cout << "Hello World!" << endl;
// }

// int main()
// {
//     MyClass myObj;
//     myObj.myMethod();
//     return 0;
// }

// =================

class Car
{
    public:
        string brand;
        string model;
        int year;
    
        Car(string x, string y, int z);
};

// constructor define outside class
Car::Car(string x, string y, int z){
    brand  = x;
    model = y;
    year = z;
}

int main()
{
    Car car1("BMW", "X5", 1999);
    Car car2("Ford", "Mustang", 1969);

    cout << car1.brand
         << ", "
         << car1.model
         << ", "
         << car1.year
         << endl;

    cout << car2.brand
         << ", "
         << car2.model
         << ", "
         << car2.year
         << endl;

    return 0;
}

// =================

// class Dog
// {
//     public:
//         void bark(){
//             cout << "Woof!" << endl;
//         }
// };

// int main()
// {
//     Dog d;
//     d.bark();
//     return 0;
// }
