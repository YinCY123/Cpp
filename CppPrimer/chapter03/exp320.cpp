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
    string sep(30, '=');
    cout << "enter a sequence of integer: ";
    vector<int> vec;
    int i;
    while(cin >> i){
        vec.push_back(i);
    }

    cout << sep << endl;
    cout << "print the content of the vector.";
    cout << endl << sep << endl;

    for(decltype(vec.size()) i = 0; i < vec.size(); ++i){
        cout << vec[i] << endl;
    }

    cout << sep << endl;; 
    cout << "Print the sum of the pair.";
    cout << endl << sep << endl;;
    // for(decltype(vec.size()) i = 0; i < (vec.size() / 2) + 1; ++i){
    //     cout << "i is: " << i << endl;
    //     cout << vec[i] + vec[vec.size() -i - 1] << endl;
    // }

    cout << *vec.begin() +  *(vec.end() - 1) << endl;
    return 0;
}
