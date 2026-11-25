#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int value = 10;
    int* ptr = &value;

    cout << "The value: " << value << endl;
    cout << "The address of the value: " << ptr << endl;
    cout << "The address of the pinter: " << &ptr << endl;
    cout << "The value pointer point to: " << *ptr << endl;

    return 0;
}
