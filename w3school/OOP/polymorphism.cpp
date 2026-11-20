#include <iostream>
using std::cout;
using std::endl;

/*
polymorphism means many forms, and it occurs when we 
have many classes that are related to each other by 
inheritance.

- Inheritance lets you reuse attributes and methods 
    of an existing class when you create a new class.

- Polymorphism lets related classes share the same 
    method name, while each class does the work in 
    its own way.

*/

// base class
class Animal{
    public:
        void animalSound(){
            cout << "The animal makes a sound\n";
        }
};

// derived class
class Pig: public Animal{
    public:
        void animalSound(){
            cout << "The Pig says: wee wee\n";
        }
};

// derived class
class Dog: public Animal{
    public:
        void animalSound(){
            cout << "The dog says: bow wow\n";
        }
};

int main()
{
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();

    return 0;
}
