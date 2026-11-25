#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main()
{
    cout << "Enter the length: "; 
    double a;
    cin >> a;

    cout << "Enter the width: ";
    double b;
    cin >> b;

    cout << "The area of the rectangle is: "
         << a * b
         << endl;
    return 0;
}
