#include <iostream>
using std::cout;
using std::endl;

/*
A virtual function is a member function in 
the base class that can be overridden in 
derived classes.

Virtual functions are a key part of 
polymorphism in C++. They let different 
objects respond differently to the same 
function call.

*/


// without virtual function
class Animal{
    public:
        virtual void animalSound(){ // virtual function
            cout << "The animal makes a sound\n";
        }
};

class Dog: public Animal{
    public:
        void animalSound() override { // override is optional, but recommanded
            cout << "The dog says: bow wow\n";
        }
};

int main()
{
    Dog myDog;
    Animal* a = &myDog;
    a->animalSound();

    return 0;
}

/*
The -> operator is used to access members (like functions 
or variables) through a pointer.
*/
