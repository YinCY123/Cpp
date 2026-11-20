#include <iostream>
using std::cout;
using std::endl;


/*
A class with at least one pure virtual function 
is called an abstract class.

you cannnot create object of an abstract class.

Every class that inherits from it must have its 
own version of the function.
*/


class Animal{
    public:
        virtual void animalSound() = 0;
};

class Pig : public Animal{ 
    public:
        void animalSound() override {
            cout << "The pig says: wee wee\n";
        }
};

class Dog: public Animal{
    public:
        void animalSound() override {
            cout << "The dog says: bow wow\n";
        }
};

int main()
{
    Pig pig;
    Dog dog;
    // pig.animalSound();
    // dog.animalSound();

    Animal* animals[2] = {&pig, &dog};
    for(Animal* a : animals){
        a->animalSound();
    }

    return 0;
}
