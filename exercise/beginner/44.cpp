#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x = 42;
    int* p1 = &x;
    int** p2 = &p1;

    cout << **p2 << endl;
    return 0;
}
