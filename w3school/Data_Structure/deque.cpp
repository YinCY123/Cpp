#include <iostream>
using std::cout;
using std::endl;

#include <deque>
using std::deque;

#include <string>
using std::string;

/*
deque: double-ended queue

- elements can be add and remove from both end
- can access element by index

*/

int main()
{
    string str(20,'=');
    deque cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // access element
    cout << cars[0] << endl;

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cout << cars.at(2) << endl;

    // change element value
    cars.at(0) = "Ople";
    cout << cars.front() << endl;

    // add element
    cars.push_back("Tesla");
    cars.push_front("VW");

    // remove element
    cars.pop_back(); // remove the last element
    cars.pop_front(); // remove the first element

    // size 
    cout << cars.size() << endl;

    // empty
    cout << cars.empty() << endl;

    // loop element
    cout << str << endl;
    cout << "Loop through elements.\n";
    cout << str << endl;

    for(string car : cars){
        cout << car << endl;
    }

    return 0;
}
