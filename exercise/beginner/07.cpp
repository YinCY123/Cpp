#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int A = 10, B = 20;
    cout << "Before swap: A = "
         << A
         << ", B = "
         << B
         << endl;


    A = A + B;
    B = A - B;
    A = A - B;
    cout << "After swap: A = "
         << A
         << ", B = "
         << B
         << endl;

    return 0;
}
