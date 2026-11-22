#include <iostream>
using std::cout;
using std::endl;

#include <queue>
using std::queue;

#include <string>
using std::string;

/*
- first in, first out
- not accessed by index
- add at the end, removed from the front
- can not add element at the decleration
*/

int main()
{
    queue<string> cars;

    // add element
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // access element
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    // change front and back elements
    cars.front() = "Tesla";
    cars.back() = "VW";

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    // remove element
    cars.pop();
    cout << cars.front() << endl;

    // size
    cout << cars.size() << endl;

    // empty
    cout << cars.empty() << endl;

    return 0;
}

