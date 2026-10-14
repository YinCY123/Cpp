#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string s1;
    string s2;

    cout << "enter two strings: ";
    cin >> s1 >> s2;
    string s = s1 + s2;
    cout << "the concatenate of the two string: "
         << s
         << endl;
    return 0;
}
