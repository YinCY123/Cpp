#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <list>
using std::list;

#include <deque>
using std::deque;

#include <set>
using std::set;

#include <map>
using std::map;

/*
- iterators are used to access and iterate through
    elements of data structures by "pointing" to them.

- The type of the iterator must match the type of 
    the data structure it should iterate through.

- begin() and end() are functions that belong to 
    data structures. they do not belong to the 
    iterator itself. Instead, they are used with 
    iterators to access and iterate through the 
    elements of those data structure.

- begain() returns an iterator that points to the 
    first element of the data structure.

- end() returns an iterator that points to one 
    position after the last element.
*/

int main()
{
    // vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    
    // create a vector iterator
    // vector<string>::iterator it;
    
    // for(it = cars.begin(); it != cars.end(); ++it){
    //     cout << *it << endl;
    // }


    // for(auto it = cars.begin(); it != cars.end(); ){
    //     if(*it == "BMW"){
    //         it = cars.erase(it);
    //     }else{
    //         cout << *it << endl;
    //         ++it;
    //     }
    // }

    // for(auto ii = cars.begin(); ii != cars.end(); ++ii){
    //     cout << *ii << endl;
    // }

    // iterator in reverse
    // for(auto it = cars.rbegin(); it != cars.rend(); ++it){
    //     cout << *it << endl;
    // }


    // iterator through list

    // list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // for(auto it = cars.begin(); it != cars.end(); ++it){
    //     cout << *it << endl;
    // }

    // iterator through deque
    // deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // for(auto it = cars.begin(); it != cars.end(); ++it){
    //     cout << *it << endl;
    // }

    // iterator through set
    // set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // for(auto it = cars.begin(); it != cars.end(); ++it){
    //     cout << *it << endl;
    // }

    // iterator through map
    map<string, int> cars = {{"Volvo", 1}, {"BMW", 2}, {"Ford", 3}, {"Mazda", 4}};
    for(auto it = cars.begin(); it != cars.end(); ++it){
        cout << it->first << " index = " << it->second << endl;
    }
    
    return 0;
}
