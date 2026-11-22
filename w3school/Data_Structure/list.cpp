#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <list>
using std::list;

#include <string>
using std::string;

/*
Stores elements sequentially, where each elements is 
connected to the next. 

Adding and removing of elements
can be done at both ends. 

Not accessible by index.
*/

int main()
{
    string str(20, '=');
    // create a list
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    cout << str << endl;
    // access the first and last element
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    // change element
    cars.front() = "Ople";
    cars.back() = "Toyota";

    // add elements
    cars.push_back("Tesla");
    cars.push_front("VW");

    // remove elements
    cars.pop_back(); 
    cars.pop_front();

    // list size
    cout << "# Of element: " << cars.size() << endl;

    // empty
    cout << cars.empty() << endl;



    cout << str << endl;
    cout << "range for access the element" << endl;
    cout << str << endl;

    for(string car : cars){
        cout << car << endl;
    }
    return 0;
}
