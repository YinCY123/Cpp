#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int swapValues(int& a, int& b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    return 0;
}

int main()
{
    int x = 100; 
    int y = 200;

    cout << "Before swap: " 
         << "X = " << x
         << "; "
         << "Y = " << y
         << endl;

    swapValues(x, y);
    cout << "After swap: " 
         << "X = " << x
         << "; "
         << "Y = " << y
         << endl;
    
    return 0;
}
