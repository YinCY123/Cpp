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

    int tmp = A;
    A = B;
    B = tmp;

    cout << "After swap: A = "
         << A
         << ", B = "
         << B
         << endl;
    
    return 0;
}
