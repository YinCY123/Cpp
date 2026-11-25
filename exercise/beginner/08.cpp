#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    double principal = 1000, rate = 10, time = 3;
    cout << "Simple Interest (SI): "
         << (principal * rate * time) / 100.0;
         << endl;

    return 0;
}
