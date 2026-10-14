#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
    cout << "enter a string: ";

    string str;
    cin >> str;
    // string toreplace("X");
    for(decltype(str.size()) n = 0; n < str.size(); ++n){
        str[n] = 'X';
    }

    cout << str << endl;

    return 0;
}
