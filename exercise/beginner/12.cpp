#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    double a, b, result;
    char op;

    cout << "enter the first number: ";
    cin >> a;

    cout << "enter operator (+, -, *, /): ";
    cin >> op;

    cout << "enter the second number: ";
    cin >> b;


    switch(op){
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': if(b == 0){
            cout << "the second number could not be zero.\n"; 
            EXIT_FAILURE;
        }else{
                result = a / b;
            };
    }

    cout << "The result of " << a << " " << op << " " << b << " = " << result << endl;

    return 0;
}
