#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int base, exp;

    cout << "please enter base and power: ";
    cin >> base >> exp;
    int tmp = exp;

    double result = 0;
    while(exp > 0){
        result += base * base;
        --exp;
    }

    cout << base 
         << " raised to the power of " 
         << tmp
         << " is: " 
         << result 
         << endl;

    return 0;
}
