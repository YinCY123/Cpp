#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
    string str;
    cout << "enter a sentence: ";

    getline(cin, str);
    string new_str;

    for(decltype(str.size()) n = 0; n < str.size(); ++n ){
        if(!ispunct(str[n])){
            new_str += str[n];;
        }
    }
    cout << new_str << endl;

    return 0;
}
