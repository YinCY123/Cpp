#include <iostream>
using std::cout;
using std::endl;

#include <unordered_map>
using std::unordered_map;

#include <string>
using std::string;

/*
it is usually faster to add and find 
elements, especially when there are 
many of them
*/

int main()
{
    unordered_map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };
    cout << "John is: " << people.at("John") << endl;
    cout << "Adele is: " << people.at("Adele") << endl;


    // add and change elements
    people["Jenny"] = 22;
    people.at("John") = 50;

    cout << "Jenny is: " << people.at("Jenny") << endl;
    cout << "John is: " << people.at("John") << endl;

    // check the exist of a key
    if(people.count("Adele")){
        cout << "Adele is in the map" << endl;
    }else{
        cout << "Adele is not in the map" << endl;
    }

    // loop through
    int total = 0;
    for(auto person : people){
        total += person.second;
    }

    cout << "Total age: " << total << endl;

    return 0;
}
