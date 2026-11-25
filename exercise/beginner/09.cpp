#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main()
{
    int number = 10;
    if(number % 2 == 0){
        cout << number << " is an " << "EVEN number." << endl;
    }else{
        cout << number << " is an " << "Odd number." << endl;;
    }
    return 0;
}
