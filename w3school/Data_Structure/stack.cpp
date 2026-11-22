#include <iostream>
using std::cout;
using std::endl;

#include <stack>
using std::stack;

#include <string>
using std::string;

/*
last in first out

no accessed by index

can only accesse element on the top

cannot add elements to the stack at declaration
*/

int main()
{
    string str(20, '=');
    stack<string> cars;

    // add elements
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // access element
    cout << cars.top() << endl;

    // change the top element
    cars.top() = "Tesla";
    cout << cars.top() << endl;

    // remove elements
    cars.pop();
    cout << cars.top() << endl;

    // size
    cout << cars.size() << endl;

    // empty
    cout << cars.empty() << endl;


    // cout << str << endl;
    // cout << "Loop through elements" << endl;
    // cout << str << endl;
    // # // loop through element
    // for(string car : cars){
    //     cout << car << endl;
    // }

    return 0;
}


