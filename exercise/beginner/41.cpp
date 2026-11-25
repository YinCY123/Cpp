#include <iostream>
using std::cout; 
using std::cin;
using std::endl;

int main()
{
    int value = 100;
    int* ptr = &value;

    cout << "The value is: " << *ptr << endl;

    return 0;
}
