#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

/*
Constructor Rules: 

- The constructor has the same name as the class.
- It has no return type (not even void).
- It is usually declared public.
- It is automatically called when an object is created.

*/

// class MyClass
// {
//     public:
//         MyClass(){
//             cout << "Hello World!" << endl;
//         }
// };


// int main()
// {
//     MyClass myObj;
//     return 0;
// }


/*
Why use constructor overlading

- to give flexibility when creating objects
- to set default or custom values
- to reduce repetive code
*/

class Car{
    public:
        string brand;
        string model;

        Car(){
            brand = "Unknown";
            model = "Unknown";
        }

        Car(string b, string m){
            brand = b;
            model = m;
        }
};

int main()
{
    Car car1;
    Car car2("BMW", "X5");
    Car car3("Ford", "Mustang");

    cout << "Car1: "
         << car1.brand
         << ", "
         << car1.model
         << endl;
    
    cout << "Car2: "
         << car2.brand
         << ", "
         << car2.model
         << endl;
        
    cout << "Car3: "
         << car3.brand
         << ", "
         << car3.model
         << endl;

    return 0;
}
