#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

/*
destructor rules

- The destructor has the same name as the class, with a ~ in front.
- It has no return type and no parameters.
- A class can only have one destructor.
- It is automatically called when the object is destroyed. 
    You do not call it yourself.
*/

//==============

// class MyClass{
//     public:
//         MyClass(){
//             cout << "Object created\n";
//         }

//         ~MyClass(){
//             cout << "Object destroyed\n";
//         }
// };

// int main()
// {
//     MyClass myObj;
//     cout << "Hello World!" << endl;
//     return 0;
// }

//=============

// class Car{
//     public:
//         Car(){
//             cout << "Car created\n";
//         }

//         ~Car(){
//             cout << "Car destroyed\n";
//         }
// };

// void drive()
// {
//     Car myCar;
//     cout << "Driving...\n";
// }

// int main()
// {
//     drive();
//     cout << "Back home\n";
//     return 0;
// }


//=================
class Hotel {
    public:
        string* guests;

        Hotel(int rooms){
            guests = new string[rooms];
            cout << "Rooms ready\n";
        }

        ~Hotel(){
            delete[] guests;
            cout << "Memory freed\n";
        }
};

int main()
{
    Hotel myHotel(3);
    myHotel.guests[0] = "Lima";
    cout << "Guest: " << myHotel.guests[0] << endl;

    return 0;
}
