#include <iostream>
using std::cout;
using std::endl;

#include <map>
using std::map;

#include <string>
using std::string;

using std::greater;


/*
- accessible by key, and each key is unique
- automatically sorted in ascending order by key
*/

int main()
{
    // change the default order
    map<string, int, greater<string>> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };
    
    // accesse by key
    cout << "John is: " << people["John"] << endl;

    // access with at
    cout << "Adele is: " << people.at("Adele") << endl;

    // change value
    people["John"] = 50;
    people.at("John") = 50;

    // add element
    people["Jenny"] = 22;
    people.insert({"Lima", 24});

    cout << "John is: " << people.at("John") << endl;

    // remove element
    people.erase("John");

    // size
    cout << people.size() << endl;

    //empty
    cout << people.empty() << endl;

    // element check
    cout << people.count("John") << endl; // 0 false, 1 true

    // loop through
    for (auto person : people){
        cout << person.first << " is: " << person.second << endl;
    }

    return 0;
}
