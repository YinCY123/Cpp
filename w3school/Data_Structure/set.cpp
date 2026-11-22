#include <iostream>
using std::cout;
using std::endl;

#include <set>
using std::set;

#include <string>
using std::string;

using std::greater;

/*
- store unique elements
- automatically in ascending order
- can be add or remove
- cannot change the value of a element
- cannot be accessed by index
*/

int main()
{

    // sort in descending order
    set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};

    for(int i : numbers){
        cout << i << endl;
    }

    // unique element
    set<string> cars = {"Volvo", "BMW", "Ford", "BMW", "Mazda"};

    // add element
    cars.insert("Tesla");
    cars.insert("VW");
    cars.insert("Toyota");
    cars.insert("Audi");


    // remove element
    cars.erase("Volvo");
    cars.erase("Mazda");

    // remove all element
    // cars.clear();

    // size
    cout << cars.size() << endl;

    // empty
    cout << cars.empty() << endl;

    // loop through
    for(string car : cars){
        cout << car << endl;
    }
    
    return 0;
}
