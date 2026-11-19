#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

// base
class Vehicle {
    public:
        string brand = "Ford";

        void honk(){
            cout << "Tuut, tuut!\n";
        }
};

// derived class
class Car: public Vehicle {
    public: 
        string model = "Mustang";
};

int main()
{
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model << endl;

    return 0;
}
