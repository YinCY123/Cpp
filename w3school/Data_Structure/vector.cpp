#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // for(string car : cars){
    //     cout << car << " " << endl;
    // }
    string str(20, '=');

    cout << "front: "
         << cars.front() 
         << endl;
    cout << "back: "
         << cars.back() 
         << endl;

    cout << str << endl;

    // accesse elements
    cout << cars.at(0) << endl;
    cout << cars.at(3) << endl;

    // replace elements
    cars[0] = "Ople";
    cars.at(1) = "Apple";

    cout << cars.at(0) << ", " << cars.at(1) << endl;

    // add elements
    cars.push_back("Tesla");
    cars.push_back("VW");
    cars.push_back("Mini");

    cout << str << endl;
    cout << "range for access elements\n";
    cout << str << endl;
    // remove elements
    cars.pop_back(); // remove elements from the end of vector
    for(string car : cars){
        cout << car << endl;
    }
     
    // vector size
    cout << cars.size() << endl;

    //empty check
    cout << cars.empty() << endl;

    // index loop through
    cout << str << endl;
    cout << "index access elements\n";
    cout << str << endl;

    for(auto i = 0; i != cars.size(); ++i){
        cout << cars.at(i) << endl;
    }

    // iterator loop through
    cout << str << endl;
    cout << "iterator access elements\n";
    cout << str << endl;
    for(auto it = cars.begin(); it != cars.end(); ++it){
        cout << *it << endl;
    }

    return 0;
}
