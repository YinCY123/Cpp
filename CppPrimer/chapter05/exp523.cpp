#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <stdexcept>
using std::runtime_error;

int main()
{
    cout << "Enter two integers: ";
    int a, b;
    double result;
    cin >> a >> b;

    try{
        if(b == 0){
            throw runtime_error("Division by zero is not allowed.");
        }
    }catch(runtime_error err){
        cout << err.what() 
             << "\nContinue? (y(Y)/n(N)): ";
        char choice;
        cin >> choice;
        if(choice == 'n' || choice == 'N'){
            cout << "Exiting program." << endl;
            return 1;
        }
        else{
            cout << "Please enter a new value for b: ";
            cin >> b;
        }
    }
    result = static_cast<double>(a) / static_cast<double>(b);
    cout << "a / b = " << result << endl;

    return 0;
}
