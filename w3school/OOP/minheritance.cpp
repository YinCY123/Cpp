#include <iostream>
using std::cout;
using std::endl;

// base
// class Vehicle {
//     public:
//         void hock(){
//             cout << "Tuut, tuut!\n";
//         }
// };

// // derived class
// class Car: public Vehicle {
//     public:
//         void drive(){
//             cout << "Driving...\n";
//         }
// };

// // derived class
// class SportCar: public Car {
//     public:
//         void turbo(){
//             cout << "Turbo on!\n";
//         }
// };

// int main()
// {
//     SportCar myCar;
    
//     myCar.hock(); // from Vehicle class
//     myCar.drive(); // from Car class
//     myCar.turbo(); // from SportCar class

//     return 0;
// }


/*
A class can also be derived from more than one base 
class, using a comma-separated list.
*/


// base class
class Camera{
    public:
        void takePhoto(){
            cout << "Taking a photo!\n";
        }
};

// Another base class
class Phone{
    public:
        void call(){
            cout << "Calling...\n";
        }
};

class SmartPhone: public Camera, public Phone {

};

int main()
{
    SmartPhone myPhone;

    myPhone.takePhoto();
    myPhone.call();

    return 0;
}
