#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    char c = 'C';
    int a = 60;
    float f = 15.5;
    double d = 25.555;

    cout << "Size of char: "
         << sizeof(c) << " byte(s)\n"
         << "Size of int: "
         << sizeof(a) << " byte(s)\n"
         << "Size of float: "
         << sizeof(f) << " byte(s)\n"
         << "Size of double: "
         << sizeof(d) << " byte(s)"
         << endl;
    return 0;
}
