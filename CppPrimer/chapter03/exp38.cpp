#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string str;
    cout << "enter a string: ";
    cin >> str;
    decltype(str.size()) n = 0;
    while( n < str.size() ){
        str[n] = 'X';
        ++n;
    }

    cout << str << endl;

    return 0;
}
