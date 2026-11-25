#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main()
{
    cout << "enter the first number: "; 
    int a;
    cin >> a;

    cout << "enter the second number: ";
    int b;
    cin >> b;

    cout << "Results: \n";
    cout << "Sum: " << a + b
         << '\n'
         << "Difference: "
         << a - b
         << '\n'
         << "Produce: " << a * b
         << '\n'
         << "Quotient (integere division): " << a / b
         << endl;

    return 0;
}
