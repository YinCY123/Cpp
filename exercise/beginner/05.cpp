#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main()
{
    cout << "Enter a single character: ";
    char asc;
    cin >> asc;
    cout << "The ASCII value is: " 
         << static_cast<int>(asc) 
         << endl;
}
