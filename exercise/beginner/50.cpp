#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class Car{
    public:
        string make;
        string model;
        int year;

        Car(string make, string model, int year)
        // {
            // this -> make = make;
            // this -> model = model;
            // this -> year = year;
            : make(make), model(model), year(year) {}
        // }

        void start_engine(){
            cout << year << " "
                 << model << " "
                 << make
                 << " engine started!"
                 << endl;
        }
};

int main()
{
    Car car("Toyota", "corolla", 2020);

    car.start_engine();
    return 0;
}
