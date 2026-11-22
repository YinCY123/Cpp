#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

/*
- structure are a way to group several related 
    variables into one place.

- a structure can contain many different data types.
*/

int main()
{
    struct {
        int Num; 
        std::string str;
    } mystruct;

    // access structure member with dot syntax

    mystruct.Num = 1;
    mystruct.str = "Hello, world!";

    cout << mystruct.Num << endl;
    cout << mystruct.str << endl;

    // one structure in multiple variables
    struct{
        string brand;
        string model;
        int year;
    } Car1, Car2;

    Car1.brand = "BMW"; 
    Car1.model = "X5"; 
    Car1.year = 1999;

    Car2.brand = "Ford"; 
    Car2.model = "Mustang";
    Car2.year = 1969;

    cout << Car1.brand
         << ", "
         << Car1.model
         << ", "
         << Car1.year
         << endl;

    cout << Car2.brand
         << ", "
         << Car2.model
         << ", "
         << Car2.year
         << endl;

    cout << "=== named structure ===" << endl;
    // named structure
    /*
    by giving a name to the structure, you can treat it as a data
    type. This means you can create variables with this structure
    anywhere in the program at any time.
    */

    struct car {
        string brand;
        string model;
        int year;
    };

    car Car3;
    car Car4;

    Car3.brand = "BMW"; 
    Car3.model = "X5";
    Car3.year = 1999;

    Car4.brand = "Ford"; 
    Car4.model = "Mustang";
    Car4.year = 1969;

    cout << Car1.brand
         << ", "
         << Car1.model
         << ", "
         << Car1.year
         << endl;

    cout << Car2.brand
         << ", "
         << Car2.model
         << ", "
         << Car2.year
         << endl;

    // example
    struct student {
        string name;
        int age;
        char grade;
    };

    student s1;
    s1.age = 14;
    s1.grade = 'A';
    s1.name = "John";

    cout << s1.name 
         << ", "
         << s1.age
         << ", "
         << s1.grade
         << endl;

    return 0;
}

