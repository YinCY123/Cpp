#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>

#include <string>
using std::string;


/*
- an important feature of iterators is that they are used with different
    algorithm functions, such as `sort()` and `find()`, to sort and search
    for elements in a data structure.

- algorithms are used to solve problems by sorting, searching, and 
    manipulating data structure.
*/


int main()
{
    // vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // sort(cars.begin(), cars.end()); // sort in alphabetical order

    // for(auto it = cars.begin(); it != cars.end(); ++it){
    //     cout << *it << endl;
    // }


    // sort numbers
    vector<int> numbers = {1, 7, 3, 5, 9, 2};
    sort(numbers.begin(), numbers.end());

    // sort thorugh position 4 to end
    sort(numbers.begin(), numbers.end());
    
    // reverse sort
    //sort(numbers.rbegin(), numbers.rend());

    for(auto it = numbers.begin(); it != numbers.end(); ++it){
        cout << *it << endl;
    }

    // searching, find(start_it, end_it, value)
    // auto it = find(numbers.begin(), numbers.end(), 3);
    // cout << *it << endl;

    // search the first element that greater than a value
    auto it = upper_bound(numbers.begin(), numbers.end(), 5);
    cout << *it << endl;

    // find the max element
    cout << *(max_element(numbers.begin(), numbers.end())) << endl;

    // copy elements from one vector to another
    vector<int> copiedNumbers(6);
    copy(numbers.begin(), numbers.end(), copiedNumbers.begin());

    cout << "===============" << endl;

    for(auto i = copiedNumbers.begin(); i != copiedNumbers.end(); ++i){
        cout << *i << endl;
    }

    // fill all elements in the numbers vectors with the value 35
    vector<int> num(6);
    fill(num.begin(), num.end(), 36);

    cout << "=================" << endl;
    for(auto i = num.begin(); i != num.end(); ++i){
        cout << *i << endl;
    }


    return 0;
}
